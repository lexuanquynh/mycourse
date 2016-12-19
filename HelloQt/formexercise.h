#ifndef FORMEXERCISE_H
#define FORMEXERCISE_H

#include <QWidget>

namespace Ui {
class FormExercise;
}

class FormExercise : public QWidget
{
    Q_OBJECT

public:
    explicit FormExercise(QWidget *parent = 0);
    ~FormExercise();

private:
    Ui::FormExercise *ui;
};

#endif // FORMEXERCISE_H
