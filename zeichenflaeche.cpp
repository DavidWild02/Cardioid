#include "zeichenflaeche.h"
#include "ui_zeichenflaeche.h"

#define PI 3.14159265359

Zeichenflaeche::Zeichenflaeche(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Zeichenflaeche)
{
    ui->setupUi(this);

    setPalette(QPalette(QColor(255,255,255)));
    setAutoFillBackground(true);
}

Zeichenflaeche::~Zeichenflaeche()
{
    delete ui;
}

double Zeichenflaeche::getFaktor(){
    return faktor;
}

void Zeichenflaeche::setPoints(int n)
{
    if(n == (int)punkte.size())
        return;

    punkte.clear();
    for( int i = 0; i < n; i++)
    {
        double x = cos(2*i*PI / n); //360/n*i * PI/180
        double y = sin(2*i*PI / n);

        punkte.push_back(QPointF(x, y));
    }

    update();
    emit pointsChanged(n);
}

void Zeichenflaeche::setFactor(double factor)
{
    if( faktor == factor)
        return;

    faktor = factor;

    update();
    emit factorChanged(factor);
}

void Zeichenflaeche::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    QPen linePen(Qt::black);
    linePen.setWidth(3);
    QPen pointPen(Qt::black);
    pointPen.setWidth(5);

    int offset = rect().height() / 2;
    painter.translate(offset, offset);

    int radius = offset - 20;
    painter.setPen(linePen);
    painter.drawEllipse(QRectF(-radius, -radius, 2*radius, 2*radius));

    for(int i = 0; i < punkte.size(); i++)
    {
        painter.setPen(pointPen);
        QPoint p1(punkte.at(i).x() * radius, punkte.at(i).y() * radius);
        painter.drawPoint(p1);

        QPoint p2;
        painter.setPen(linePen);
            double alpha = 2*std::fmod(i*faktor, punkte.size())*PI /punkte.size();
            p2 = QPoint(cos(alpha) * radius, sin(alpha) * radius);

        painter.drawLine(p1, p2);
    }
}
