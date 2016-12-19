#include "formschoolprofile.h"
#include "ui_formschoolprofile.h"

FormSchoolProfile::FormSchoolProfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormSchoolProfile)
{
    ui->setupUi(this);
}

FormSchoolProfile::~FormSchoolProfile()
{
    delete ui;
}
