#include "estate.h"
#include <QString>
 #include "ui_widget.h"
#include <iostream>
#include <QWidget>
#include "widget.h"
Estate::Estate(Ui::Widget *ui)
{
      QString str="алексеев";
      ui->owner->setText(str);
      std::cout<<"rrr";
}
