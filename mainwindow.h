#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "include.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:

    void OpenFileslot();
    void CloseFileslot();
    void SaveFileslot();
    void Aboutslot();
    void TypeFaceslot();
    void Colorslot();
    void Printslot();
    void getTimeslot();

private:
    Ui::MainWindow *ui;
    QString FileName;//获取文件名

};

#endif // MAINWINDOW_H
