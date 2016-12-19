#include "formdonate.h"
#include "ui_formdonate.h"

FormDonate::FormDonate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormDonate)
{
    ui->setupUi(this);
}

FormDonate::~FormDonate()
{
    delete ui;
}
