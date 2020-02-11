#ifndef ZEICHENFLAECHE_H
#define ZEICHENFLAECHE_H

#include <QWidget>
#include <QPainter>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdexcept>

namespace Ui {
class Zeichenflaeche;
}

class Zeichenflaeche : public QWidget
{
    Q_OBJECT

public:
    explicit Zeichenflaeche(QWidget *parent = 0);
    ~Zeichenflaeche();
    double getFaktor();

public slots:
    void setPoints(int n);
    void setFactor(double factor);

signals:
    void pointsChanged(int newPoints);
    void factorChanged(double newFactor);

protected:
    void paintEvent(QPaintEvent*);

private:
    Ui::Zeichenflaeche *ui;
    double faktor;
    std::vector<QPointF> punkte;
};

#endif // ZEICHENFLAECHE_H
