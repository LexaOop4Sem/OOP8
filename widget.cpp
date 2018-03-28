#include "widget.h"
#include "ui_widget.h"
#include <iostream>
#include"estate.h"
#include "states.h"

class Estate;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
est=new Estate();
st= new States();

}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_btnCalc_clicked()
{
    std::cout<<"clic";
est->Set(ui);

  st->add(est);


}

void Widget::on_btnUndo_clicked()
{
  bool b=st->hasStates();
  std::cout<<b;
}
