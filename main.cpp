#include "widget.h"
#include <QApplication>
#include <iostream>
#include <QString>
#include <QTextStream>

using namespace std;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
       Widget w;
       QTextStream cout (stdout);
       setlocale(LC_ALL, "Russian");
    ;

        QString str = w.ui->owner->text();
cout<<str;
 cout<<"before";
       w.show();



       cout<<"after";




return a.exec();
//QTextStream cout (stdout);
//setlocale(LC_ALL, "Russian");
//QString str="oleg";
//cout<<str;

}
