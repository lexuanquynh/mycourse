#ifndef FORMYOURTIMELINE_H
#define FORMYOURTIMELINE_H

#include <QWidget>

namespace Ui {
class FormYourTimeLine;
}

class FormYourTimeLine : public QWidget
{
    Q_OBJECT

public:
    explicit FormYourTimeLine(QWidget *parent = 0);
    ~FormYourTimeLine();

private:
    Ui::FormYourTimeLine *ui;
};

#endif // FORMYOURTIMELINE_H
