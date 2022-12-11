#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
class secDialog;
}

class secDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secDialog(QWidget *parent = nullptr);
    ~secDialog();

private:
    Ui::secDialog *ui;
};

#endif // SECDIALOG_H
