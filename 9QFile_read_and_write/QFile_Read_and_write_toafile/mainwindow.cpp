#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"
#include "QFileDialog"
#include "QDir"
#include "QTimer"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(myfunction()));
    timer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myfunction()
{
    qDebug() << "updat..";
}




void MainWindow::on_pushButton_clicked()
{

    QString filename = QFileDialog::getSaveFileName(this,"path to save file", QDir::homePath());
    QFile file(filename);

    if (!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "title", "file not found");
    }

    QTextStream out (&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    out.flush();
    file.close();
}




void MainWindow::on_pushButton_2_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "open file", QDir::homePath());
    QFile file(filename);

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not found");
    }

    QTextStream in (&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);

    file.close();

}





void MainWindow::on_pushButton_3_clicked()
{
    QString filter = "All file (*.*) ;; text file (*.*)";
    QString filename = QFileDialog::getOpenFileName(this, "..", QDir::homePath(), filter);
    QFile file(filename);

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "filenotfound");
    }
    QTextStream in (&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);

    file.close();
}

