#include "formtop10.h"
#include "ui_formtop10.h"

FormTop10::FormTop10(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormTop10)
{
    ui->setupUi(this);
}

FormTop10::~FormTop10()
{
    delete ui;
}
