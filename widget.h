#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "ui_widget.h"
#include "states.h"
#include "estate.h"
#include "calculationfacade.h"

class Estate;
class States;

namespace Ui {
class Widget;
}

class Widget : public QWidget{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent=0);
      ~Widget();

    Ui::Widget *ui;
    Estate *est;
    //Widget(){est=Estate(ui);};
    States *st;
   // Widget(){st=States();};

//B(int m, int n) : test2(m, n) {}
   // explicit Widget(QWidget *parent = 0) : est(){}


private slots:
    //void on_btnCalc_clicked();
    //void on_btnUndo_clicked();
    void btnUndoPressed();
    void btnCalcPressed();
};

#endif // WIDGET_H
