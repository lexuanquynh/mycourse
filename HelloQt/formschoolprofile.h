#ifndef FORMSCHOOLPROFILE_H
#define FORMSCHOOLPROFILE_H

#include <QWidget>

namespace Ui {
class FormSchoolProfile;
}

class FormSchoolProfile : public QWidget
{
    Q_OBJECT

public:
    explicit FormSchoolProfile(QWidget *parent = 0);
    ~FormSchoolProfile();

private:
    Ui::FormSchoolProfile *ui;
};

#endif // FORMSCHOOLPROFILE_H
