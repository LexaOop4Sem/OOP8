#include "estate.h"
#include <QString>
 #include "ui_widget.h"
#include <iostream>
#include <QWidget>
#include "widget.h"
#include <QTextStream>
#include <QTextCodec>



#include "widget.h"
#include "estate.h"
#include <QApplication>
#include <iostream>
#include <QString>
#include <QTextStream>
 #include "ui_widget.h"

Estate::Estate(Ui::Widget *ui)
{
    QTextStream cout (stdout);
    setlocale(LC_ALL, "Russian");


     owner=ui->owner->text();
      age=ui->age->text().toInt();
      residents=ui->residents->text().toInt();
area=ui->residents->text().toInt();
std::cout<<area<<std::endl;
months=ui->period->currentIndex();
if(months==0)months=6;
else if(months==1)months=12;
else months=18;
cout<<months;
area=ui->residents->text().toInt();

}
