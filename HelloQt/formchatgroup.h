#ifndef FORMCHATGROUP_H
#define FORMCHATGROUP_H

#include <QWidget>

namespace Ui {
class FormChatGroup;
}

class FormChatGroup : public QWidget
{
    Q_OBJECT

public:
    explicit FormChatGroup(QWidget *parent = 0);
    ~FormChatGroup();

private:
    Ui::FormChatGroup *ui;
};

#endif // FORMCHATGROUP_H
