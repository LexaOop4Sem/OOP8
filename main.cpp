#include "widget.h"
#include "estate.h"
#include <QApplication>
#include <iostream>
#include <QString>
#include <QTextStream>
 #include "ui_widget.h"

using namespace std;

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);

       Widget *w= new Widget;


       //Estate *est= new Estate();

       QTextStream cout (stdout);
       setlocale(LC_ALL, "Russian");
    //   owner= w->ui->owner->text();
     //  QString str="алексеев";
     //  w->ui->owner->setText(str);




 cout<<"before";




 w->show();


       cout<<"after";


//btnCalc

return a.exec();
//QTextStream cout (stdout);
//setlocale(LC_ALL, "Russian");
//QString str="oleg";
//cout<<str;

}
