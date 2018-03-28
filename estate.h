#ifndef ESTATE_H
#define ESTATE_H
#include "widget.h"
 #include "ui_widget.h"
#include <QObject>
#include <QWidget>



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
