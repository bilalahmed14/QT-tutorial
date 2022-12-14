#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QFileDialog"
#include "QTextStream"
#include "QMessageBox"
#include "QFont"
#include "QFontDialog"
#include "QColor"
#include "QColorDialog"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    filepath = "";
    ui->textEdit->setText("");

}


void MainWindow::on_actionOpen_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(file_name);
    filepath = file_name;

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
            QMessageBox::warning(this, "title", "file not open");
            return;
    }
    QTextStream in (&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


void MainWindow::on_actionSave_triggered()
{

    QFile file(filepath);

    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");
        return;
    }
    QTextStream out (&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

}


void MainWindow::on_actionSave_as_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this, "open the file");
    QFile file(file_name);
    filepath = file_name;

    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");
        return;
    }
    QTextStream out (&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

}


void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionInfo_triggered()
{
    QString message;
    message = "Author: Bilal ahmed\n";
    message += "simple Text editor, or so called Notepad\n";
    message += "created: 2022";
    QMessageBox::about(this, "About me",message);
}


void MainWindow::on_actionFont_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if(ok)
    {
        ui->textEdit->setFont(font);
    } else return;

}


void MainWindow::on_actionColor_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white, this, "choose color");
    if(color.isValid())
    {
        ui->textEdit->setTextColor(color);
    }
}


void MainWindow::on_actionBackground_color_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white, this, "choose color");
    if(color.isValid())
    {
        ui->textEdit->setTextBackgroundColor(color);
    }
}


void MainWindow::on_actionBackground_color_edit_text_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white, this, "choose color");
    QPalette palette;
    palette.setColor(QPalette::Base,color);
    if(color.isValid())
    {
        ui->textEdit->setPalette(palette);
    }
}

