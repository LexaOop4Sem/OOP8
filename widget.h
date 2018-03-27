#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
 #include "ui_widget.h"


namespace Ui {
class Widget;
}

class Widget : public QWidget{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();


    Ui::Widget *ui;



private slots:
    void on_btnCalc_clicked();
};

#endif // WIDGET_H
