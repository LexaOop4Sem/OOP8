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

    public:

};

#endif // WIDGET_H
