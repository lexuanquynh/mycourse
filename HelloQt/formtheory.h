#ifndef FORMTHEORY_H
#define FORMTHEORY_H

#include <QWidget>

namespace Ui {
class FormTheory;
}

class FormTheory : public QWidget
{
    Q_OBJECT

public:
    explicit FormTheory(QWidget *parent = 0);
    ~FormTheory();

private:
    Ui::FormTheory *ui;
};

#endif // FORMTHEORY_H
