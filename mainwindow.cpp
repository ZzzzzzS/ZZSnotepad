#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "include.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->start_open,SIGNAL(triggered()),this,SLOT(OpenFileslot()));
    QObject::connect(ui->start_Save_As,SIGNAL(triggered()),this,SLOT(CloseFileslot()));
    QObject::connect(ui->start_Save,SIGNAL(triggered()),this,SLOT(SaveFileslot()));
    QObject::connect(ui->exit,SIGNAL(triggered()),this,SLOT(close()));
    QObject::connect(ui->actionprint,SIGNAL(triggered()),this,SLOT(Printslot()));

    QObject::connect(ui->actionRedo,SIGNAL(triggered()),ui->textEdit,SLOT(redo()));
    QObject::connect(ui->actionUndo,SIGNAL(triggered()),ui->textEdit,SLOT(undo()));
    QObject::connect(ui->actionDelete,SIGNAL(triggered()),ui->textEdit,SLOT(clear()));
    QObject::connect(ui->actionCopy,SIGNAL(triggered()),ui->textEdit,SLOT(copy()));
    QObject::connect(ui->actioncut,SIGNAL(triggered()),ui->textEdit,SLOT(cut()));
    QObject::connect(ui->actionPaste,SIGNAL(triggered()),ui->textEdit,SLOT(paste()));
    QObject::connect(ui->actionSelect_All,SIGNAL(triggered()),ui->textEdit,SLOT(selectAll()));
    QObject::connect(ui->actionGet_time,SIGNAL(triggered()),this,SLOT(getTimeslot()));

    QObject::connect(ui->actiontypeface,SIGNAL(triggered()),this,SLOT(TypeFaceslot()));
    QObject::connect(ui->actioncolor,SIGNAL(triggered()),this,SLOT(Colorslot()));

    QObject::connect(ui->actionAbout,SIGNAL(triggered()),this,SLOT(Aboutslot()));
    this->setWindowTitle("Untitled");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::OpenFileslot()//打开文件操作
{
    FileName=QFileDialog::getOpenFileName(this, tr("Open File"),QDir::currentPath(),tr("*.txt *.c *.cpp *.h"));
   // qDebug()<<"test"<<OpenFileName;
    QFile *file=new QFile;//打开文件，用文件指针，和C语言基本相同
    file->setFileName(FileName);//传入地址
    bool ok=file->open(QIODevice::ReadWrite);//设置打开方式
    if(ok==true)
    {
        QTextStream in(file);
        ui->textEdit->setText(in.readAll());//载入到图形
        file->close();
        delete file;
    }
    this->setWindowTitle(FileName);
}

void MainWindow::CloseFileslot()//关闭文件操作，与打开文件方式基本相同
{
    FileName=QFileDialog::getSaveFileName(this,tr("Save As"),QDir::currentPath(),tr("*.txt *.c *.cpp *.h"));
    QFile *file=new QFile;
    file->setFileName(FileName);
    bool ok=file->open(QIODevice::ReadWrite);//设置打开方式
    if(ok==true)
    {
        QTextStream out(file);
        out<<ui->textEdit->toPlainText();//转换为纯文本
        file->close();
        delete file;
    }

}

void MainWindow::SaveFileslot()//新建，保存文件操作
{
    if(FileName.isEmpty())
    {
        FileName=QFileDialog::getSaveFileName(this,tr("Save"),QDir::currentPath(),tr("*.txt *.c *.cpp *.h"));
    }
    QFile *file=new QFile;
    file->setFileName(FileName);
    file->remove(FileName);//清空原有数据
    bool ok=file->open(QIODevice::ReadWrite);//设置打开方式
    if(ok==true)
    {
        QTextStream out(file);
        out<<ui->textEdit->toPlainText();//转换为纯文本
        file->close();
        delete file;
    }

}

void MainWindow::Aboutslot()//关于界面
{
    aboutwindow windowabout;
    windowabout.show();
    windowabout.exec();
    // QMessageBox::information(this,tr("ZZS NotePad"),"Powered By ZZS®\nAll Rights Reserved © 2017\nVersion:1.0",QMessageBox::Close);
}

void MainWindow::TypeFaceslot()
{
    bool ok;
    QFont font;
    font=QFontDialog::getFont(&ok,this);
    if(ok)
    {
        ui->textEdit->setFont(font);
    }
}

void MainWindow::Colorslot()
{
    QColor color = QColorDialog::getColor(Qt::green, this, "Select Color");
    if (color.isValid())
    {
        ui->textEdit->setTextColor(color);
    }
}

void MainWindow::Printslot()
{
    QPrinter printer;
    QPrintDialog printDialog(&printer, this);
    if (printDialog.exec() == QDialog::Accepted)
    {
          ui->textEdit->print(&printer);
     }

}

void MainWindow::getTimeslot()
{
    QDateTime settime=QDateTime::currentDateTime();
    QString time=settime.toString();
    ui->textEdit->append(time);
}


