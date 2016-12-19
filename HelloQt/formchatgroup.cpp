#include "formchatgroup.h"
#include "ui_formchatgroup.h"

FormChatGroup::FormChatGroup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormChatGroup)
{
    ui->setupUi(this);
}

FormChatGroup::~FormChatGroup()
{
    delete ui;
}
