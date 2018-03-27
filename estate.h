#ifndef ESTATE_H
#define ESTATE_H
#include "widget.h"
 #include "ui_widget.h"
#include <QObject>
#include <QWidget>


class Estate : public QObject,public Ui::Widget{
    Q_OBJECT
public:
    enum EstateType {
        ECONOM,
        LUXURIOUS,
        TOWN_HOUSE,
        COTTAGE     };
    Estate(Ui::Widget *ui);



 //void Set(Widget *w);
private:
    int age;
    int area;
    int residents;
    int months;
    EstateType type;
    QString owner;


};
#endif
// ESTATE_H
