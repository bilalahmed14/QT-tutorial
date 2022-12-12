#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QTextStream"
#include "QMessageBox"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QFile file("D:/QT-tutorial/9QFile_read_and_write/QFile_Read_and_write_toafile/myfile.txt");

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
    QFile file("D:/QT-tutorial/9QFile_read_and_write/QFile_Read_and_write_toafile/myfile.txt");

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not found");
    }

    QTextStream in (&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);

    file.close();

}












