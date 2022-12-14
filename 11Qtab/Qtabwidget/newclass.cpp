#include "newclass.h"
#include "ui_newclass.h"

newclass::newclass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newclass)
{
    ui->setupUi(this);
}

newclass::~newclass()
{
    delete ui;
}
