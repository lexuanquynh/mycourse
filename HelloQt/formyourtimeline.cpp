#include "formyourtimeline.h"
#include "ui_formyourtimeline.h"

FormYourTimeLine::FormYourTimeLine(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormYourTimeLine)
{
    ui->setupUi(this);
}

FormYourTimeLine::~FormYourTimeLine()
{
    delete ui;
}
