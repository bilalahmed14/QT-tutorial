#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QPixmap"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/data/data/images.jpg");
    int w = ui->labelpic->width();
    int h = ui->labelpic->height();
    ui->labelpic->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    ui->statusbar->addPermanentWidget(ui->label);
    ui->statusbar->addPermanentWidget(ui->progressBar);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    QString username = ui->username_2->text();
    QString password = ui->password_2->text();

    if (username == "t" && password == "t"){
//        QMessageBox::information(this, "login", "login success");
//        hide();
//        secdialog = new secDialog(this);
//        secdialog->show();
    ui->statusbar->showMessage("Login success", 2000);

    }
    else{
//        QMessageBox::warning(this, "login", "login failed");
        ui->statusbar->showMessage("Login Failed", 2000);
    }
}

