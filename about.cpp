#include "about.h"
#include "ui_about.h"
#include "include.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    QObject::connect(this->about,SIGNAL());
}

about::~about()
{
    delete ui;
}
