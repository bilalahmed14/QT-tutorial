#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_clicked();

    void on_label_pic_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    secDialog *secdialog;
};
#endif // MAINWINDOW_H
