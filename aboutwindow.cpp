#include "aboutwindow.h"
#include "ui_aboutwindow.h"
#include "include.h"

aboutwindow::aboutwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutwindow)
{
    ui->setupUi(this);
    this->setWindowTitle("About");
    this->setMaximumSize(450,435);
    this->setMinimumSize(450,435);

    QMovie *amov=new QMovie("start.gif");
    ui->label->setMovie(amov);
    amov->start();

    QObject::connect(ui->AboutClose,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(ui->AboutQT,SIGNAL(clicked()),qApp,SLOT(aboutQt()));//为什么是qapp qapp是一个宏
}

aboutwindow::~aboutwindow()
{
    delete ui;
}
