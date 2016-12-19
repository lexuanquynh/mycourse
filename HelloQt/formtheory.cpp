#include "formtheory.h"
#include "ui_formtheory.h"

FormTheory::FormTheory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormTheory)
{
    ui->setupUi(this);
}

FormTheory::~FormTheory()
{
    delete ui;
}
