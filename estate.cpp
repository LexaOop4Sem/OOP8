#include "estate.h"
//#include <QString>
//#include "ui_widget.h"
//#include <iostream>
//#include <QWidget>
//#include <QTextStream>
//#include <QTextCodec>
//#include "calculationfacade.h"


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
           cout<<"type"<<type<<endl;
           switch (type) {
           case ECONOM:

               ui->estateType->setCurrentIndex(0);
;
               break;
           case LUXURIOUS:

              ui->estateType->setCurrentIndex(1);
               break;
           case TOWN_HOUSE:

               ui->estateType->setCurrentIndex(2);
               break;
           case COTTAGE:

               ui->estateType->setCurrentIndex(3);
               break;
      }

           switch (months) {
           case 6:

               ui->period->setCurrentIndex(0);
;
               break;
           case 12:

              ui->period->setCurrentIndex(1);
               break;

           case 18:

               ui->period->setCurrentIndex(2);
               break;

      }
}
