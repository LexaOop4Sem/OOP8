#include "widget.h"
#include <QTextStream>



class Estate;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
est=new Estate();
st= new States();
  connect(ui->btnCalc, SIGNAL(pressed()), this, SLOT(btnCalcPressed()));
  connect(ui->btnUndo, SIGNAL(pressed()), this, SLOT(btnUndoPressed()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::btnCalcPressed(){
    Estate *newest= new Estate();
   newest->Set(ui);

   int cost=CalculationFacade::getc(newest);
   newest->SetCost(ui,cost);
     st->add(newest);
bool b=st->hasStates();
if(b){
     ui->btnUndo->setEnabled(true);
}




}

//void Widget::on_btnCalc_clicked()
//{
// Estate *newest= new Estate();
//newest->Set(ui);

//int cost=CalculationFacade::getCost(newest);
//newest->SetCost(ui,cost);

// //newest=est;
//  st->add(newest);


//}


void Widget::btnUndoPressed(){
    QTextStream cout (stdout);
  bool b=st->hasStates();
  cout<<endl<<"hasstates"<<b<<endl;
  if (b){

  est=st->getActualData();
est->TXT(ui);

  }
  else{
   ui->btnUndo->setEnabled(false);
  }
  return;

}

//void Widget::on_btnUndo_clicked()
//{
//    QTextStream cout (stdout);
//  bool b=st->hasStates();
//  cout<<endl<<"hasstates"<<b<<endl;
//  if (b){

//  est=st->getActualData();
//est->TXT(ui);

//  }
//  return;

//}
