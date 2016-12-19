#include "formexercise.h"
#include "ui_formexercise.h"

FormExercise::FormExercise(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormExercise)
{
    ui->setupUi(this);
}

FormExercise::~FormExercise()
{
    delete ui;
}
