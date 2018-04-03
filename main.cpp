#include "widget.h"
#include <QApplication>
#include <iostream>
#include <QString>
#include <QTextStream>
#include <QTextCodec>
 #include "ui_widget.h"

using namespace std;

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);

       Widget *w= new Widget;

       QTextStream cout (stdout);
       setlocale(LC_ALL, "Russian");


 w->show();




//btnCalc

return a.exec();
//QTextStream cout (stdout);
//setlocale(LC_ALL, "Russian");
//QString str="oleg";
//cout<<str;

}
