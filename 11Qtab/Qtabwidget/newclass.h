#ifndef NEWCLASS_H
#define NEWCLASS_H

#include <QWidget>

namespace Ui {
class newclass;
}

class newclass : public QWidget
{
    Q_OBJECT

public:
    explicit newclass(QWidget *parent = nullptr);
    ~newclass();

private:
    Ui::newclass *ui;
};

#endif // NEWCLASS_H
