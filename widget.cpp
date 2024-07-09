#include "widget.h"
#include "ui_widget.h"
#include "form.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString account = ui->lineEdit->text().trimmed();
    QString password = ui->lineEdit_2->text().trimmed();
    if(account=="admin"&&password=="1234"){
        close();
        Form *c =new Form;
        c->show();
    }else{
        ui->label_error->setText("ACCount or password error!");
    }
}


void Widget::on_pushButton_2_clicked()
{
    close();
}

