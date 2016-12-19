#ifndef FORMTOP10_H
#define FORMTOP10_H

#include <QWidget>

namespace Ui {
class FormTop10;
}

class FormTop10 : public QWidget
{
    Q_OBJECT

public:
    explicit FormTop10(QWidget *parent = 0);
    ~FormTop10();

private:
    Ui::FormTop10 *ui;
};

#endif // FORMTOP10_H
