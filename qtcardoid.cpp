#include "qtcardoid.h"
#include "ui_qtcardoid.h"

QtCardoid::QtCardoid(QWidget *parent) :
    QWidget(parent),
    zeichenflaeche(new Zeichenflaeche),
    eingabeFaktor(new QLineEdit),
    eingabePunkte(new QLineEdit),
    qdialFaktor(new QDial),
    qdialPunkte(new QDial),
    animationStarten(new QPushButton),
    animationStoppen(new QPushButton),
    qtimer(new QTimer),
    ui(new Ui::QtCardoid)
{
    ui->setupUi(this);

    QString ANIMATION_ANHALTEN("Animation anhalten");
    QString ANIMATION_FORTFAHREN("Animation fortfahren");


    QLabel* punkteEingeben = new QLabel("&Anzahl an Punkten:");
    punkteEingeben->setBuddy(eingabePunkte);
    QLabel* faktorEingeben = new QLabel("&Faktor:");
    faktorEingeben->setBuddy(eingabeFaktor);
    animationStarten->setText("Animation starten");
    animationStoppen->setText(ANIMATION_ANHALTEN);
    animationStoppen->setEnabled(false);

    QRegExp regex("\\d{1,2}((\\.|\\,)\\d*)?");
    QValidator* qval = new QRegExpValidator(regex, this);
    eingabePunkte->setValidator(qval);
    eingabeFaktor->setValidator(qval);

    QBoxLayout* zeile1 = new QBoxLayout(QBoxLayout::LeftToRight);
    zeile1->addWidget(punkteEingeben);
    zeile1->addWidget(eingabePunkte);
    zeile1->addWidget(faktorEingeben);
    zeile1->addWidget(eingabeFaktor);

    QBoxLayout* zeile2 = new QBoxLayout(QBoxLayout::LeftToRight);
    zeile2->addWidget(qdialPunkte);
    zeile2->addWidget(qdialFaktor);

    QGridLayout *gridLayout = new QGridLayout(this);
    gridLayout->addWidget(zeichenflaeche, 0, 0, 5, 5);
    gridLayout->addLayout(zeile1, 5, 0, 1, 5);
    gridLayout->addLayout(zeile2, 6, 0, 1, 5);
    gridLayout->addWidget(animationStarten, 7, 1, 1, 3);
    gridLayout->addWidget(animationStoppen, 8, 1, 1, 3);
    setLayout(gridLayout);

    connect(eingabePunkte, QLineEdit::textChanged, [this](QString value){
        zeichenflaeche->setPoints(value.toDouble());
    });
    connect(zeichenflaeche, SIGNAL(pointsChanged(int)), qdialPunkte, SLOT(setValue(int)));
    connect(qdialPunkte, &QDial::valueChanged, eingabePunkte, [this](int value){
        eingabePunkte->setText(QString::number(value));
    });
    connect(eingabeFaktor, QLineEdit::textChanged, [this](QString value){
        zeichenflaeche->setFactor(value.toDouble());
    });
    connect(zeichenflaeche, Zeichenflaeche::factorChanged, qdialFaktor, [this](double value){
        qdialFaktor->setValue((int)value);
    });
    connect(qdialFaktor, QDial::valueChanged, eingabeFaktor, [this](int value){
    if(eingabeFaktor->text().toInt() != qdialFaktor->value())
            eingabeFaktor->setText(QString::number(value));
    });

    connect(animationStarten, QPushButton::clicked, this, [this](){
        zeichenflaeche->setFactor(0);
        qtimer->start(16);
        animationStoppen->setEnabled(true);
    });
    connect(animationStoppen, QPushButton::clicked, this, [this, ANIMATION_FORTFAHREN, ANIMATION_ANHALTEN](){
        if(qtimer->isActive()){
            animationStoppen->setText(ANIMATION_FORTFAHREN);
            qtimer->stop();
        }
        else if(animationStoppen->text() == ANIMATION_FORTFAHREN){
            qtimer->start(16);
            animationStoppen->setText(ANIMATION_ANHALTEN);
        }
    });
    connect(qtimer, QTimer::timeout, this, [this](){
        QString s = QString("%1").arg(zeichenflaeche->getFaktor() + 0.008);
        eingabeFaktor->setText(s);
        if(zeichenflaeche->getFaktor() > 99.98){
            qtimer->stop();
            animationStoppen->setEnabled(false);
        }
    });

    eingabeFaktor->setText("2");
    eingabePunkte->setText("100");
}

QtCardoid::~QtCardoid()
{
    delete ui;
}
