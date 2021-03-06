#ifndef ESTATE_H
#define ESTATE_H
#include "widget.h"
 #include "ui_widget.h"
#include <QObject>
#include <QWidget>
#include <QString>
#include <iostream>
#include <QTextStream>
#include <QTextCodec>



class Estate : public QObject{
    Q_OBJECT
public:
    enum EstateType {
        ECONOM,
        LUXURIOUS,
        TOWN_HOUSE,
        COTTAGE     };
    Estate();
    void Set(Ui::Widget *ui);
    void SetCost(Ui::Widget *ui,int &cost);
    EstateType getType();
     int getresidents();
     void TXT(Ui::Widget *ui);
private:
    int age;
    int area;
    int residents;
    int months;
    int costs;
    EstateType type;
    QString owner;


};
#endif
// ESTATE_H
