#include "estate.h"
#include <QString>
#include "ui_widget.h"
#include <iostream>
#include <QWidget>
#include <QTextStream>
#include <QTextCodec>
#include "calculationfacade.h"


Estate::Estate()
{
    QTextStream cout (stdout);
    setlocale(LC_ALL, "Russian");

cout<<"est const";
}
void Estate::Set(Ui::Widget *ui){

    QTextStream cout (stdout);
    setlocale(LC_ALL, "Russian");


    owner=ui->owner->text();
    age=ui->age->text().toInt();
    int idx=ui->estateType->currentIndex();
    type=static_cast<EstateType>(idx);
    residents=ui->residents->text().toInt();
     area=ui->area->text().toInt();
    residents=ui->residents->text().toInt();
    months=ui->period->currentIndex();
        if(months==0)months=6;
        else if(months==1)months=12;
        else months=18;


     //int pay=residents-5;



//QString s = QString::number(pay);
    //ui->cost->setText(s);


}

int Estate::getresidents(){

    return this->residents;
}

Estate::EstateType Estate::getType(){
return this->type;


}

void Estate::SetCost(Ui::Widget *ui,int &cost){
    costs=cost;
    QString s = QString::number(cost);
    ui->cost->setText(s);

}




//int age;
//int area;
//int residents;
//int months;
//int costs;
//EstateType type;
//QString owner;


void Estate::TXT(Ui::Widget *ui){

//     QString ss = "www";
//     ui->owner->setText(ss);

    QTextStream cout (stdout);
    cout<<endl<<this->residents<<endl;

    ui->owner->setText(this->owner);
         QString s = QString::number(age);
         ui->age->setText(s);

        // ui->estateType->setEditText(s);

         s = QString::number(residents);
         ui->residents->setText(s);
          s = QString::number(area);
         ui->area->setText(s);

          s = QString::number(costs);
         // ui->estateType->setText(s);
           ui->cost->setText(s);
           switch (type) {
           case ECONOM:
               s="Квартира эконом-класса";
               ui->estateType->setEditText(s);
               break;
           case LUXURIOUS:
               s="Элитная квартира";
               ui->estateType->setEditText(s);
               break;
           case TOWN_HOUSE:
               s="Таун-хаус";
               ui->estateType->setEditText(s);
               break;
           case COTTAGE:
               s="Коттедж";
               ui->estateType->setEditText(s);
               break;
      }


}
