#include "widget.h"
#include "estate.h"
#include <QApplication>
#include <iostream>
#include <QString>
#include <QTextStream>

using namespace std;

int main(int argc, char *argv[])
{
Estate est;
est.age=3;
    QApplication a(argc, argv);
       Widget w;
       QTextStream cout (stdout);
       setlocale(LC_ALL, "Russian");


        QString str = w.ui->owner->text();
cout<<str;
 cout<<"before";

   w.show();
 QObject::connect(w.ui->btnCalc,SIGNAL(clicked(bool)),&a,SLOT(quit()));





       cout<<"after";


//btnCalc

return a.exec();
//QTextStream cout (stdout);
//setlocale(LC_ALL, "Russian");
//QString str="oleg";
//cout<<str;

}
