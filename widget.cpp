#include "widget.h"
#include "ui_widget.h"
#include <iostream>
#include"estate.h"
#include "states.h"
#include <QTextStream>


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

est->Set(ui);

int cost=CalculationFacade::getCost(est);
est->SetCost(ui,cost);
 Estate *newest= new Estate();
 newest=est;
  st->add(newest);


}

void Widget::on_btnUndo_clicked()
{
    QTextStream cout (stdout);
  bool b=st->hasStates();
  cout<<endl<<"hasstates"<<b<<endl;
  if (b){

  est=st->getActualData();
est->TXT(ui);

  }
  return;

}
