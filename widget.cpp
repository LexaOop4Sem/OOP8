#include "widget.h"
#include "ui_widget.h"
#include <iostream>
#include"estate.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_btnCalc_clicked()
{
    Estate *est= new Estate(ui);
}
