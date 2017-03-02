#include "mainwindow.h"
#include <QApplication>
#include "include.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QMovie *movie=new QMovie("start.gif");

    QLabel *startlabel=new QLabel("",0);

    QProgressBar *startprogress=new QProgressBar;
    //startprogress->setMaximumWidth(400);
    startprogress->setMinimumWidth(400);
    startprogress->setMinimum(0);
    startprogress->setMaximum(3000);

    startlabel->setWindowFlags(Qt::FramelessWindowHint);
    startprogress->setWindowFlags(Qt::FramelessWindowHint);

    startlabel->setMovie(movie);

    movie->start();

    QTime *t=new QTime;
    t->start();

    startlabel->show();
    startprogress->show();


    while(t->elapsed()<4000)
    {
       startprogress->setValue(t->elapsed());
        QApplication::processEvents();
    }
    startlabel->close();
    startprogress->close();

    delete t;
    delete movie;
    delete startlabel;
    delete startprogress;


    MainWindow w;
    w.show();

    return a.exec();
}
