#ifndef FORMDONATE_H
#define FORMDONATE_H

#include <QWidget>

namespace Ui {
class FormDonate;
}

class FormDonate : public QWidget
{
    Q_OBJECT

public:
    explicit FormDonate(QWidget *parent = 0);
    ~FormDonate();

private:
    Ui::FormDonate *ui;
};

#endif // FORMDONATE_H
