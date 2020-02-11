#ifndef QTCARDOID_H
#define QTCARDOID_H

#include <QWidget>
#include <QLineEdit>
#include <QGridLayout>
#include <QLabel>
#include <QDial>
#include <qPushButton>
#include <QTimer>
#include <QRegExpValidator>
#include <zeichenflaeche.h>


namespace Ui {
class QtCardoid;
}

class QtCardoid : public QWidget
{
    Q_OBJECT

public:
    explicit QtCardoid(QWidget *parent = 0);
    ~QtCardoid();

private:
    Ui::QtCardoid *ui;
    Zeichenflaeche* zeichenflaeche;
    QLineEdit *eingabeFaktor;
    QLineEdit *eingabePunkte;
    QDial *qdialFaktor;
    QDial *qdialPunkte;
    QPushButton *animationStarten;
    QPushButton *animationStoppen;
    QTimer *qtimer;
};

#endif // QTCARDOID_H
