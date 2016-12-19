#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "formyourtimeline.h"
#include "formtheory.h"
#include "formschoolprofile.h"
#include "formexercise.h"
#include "formtop10.h"
#include "formchatgroup.h"
#include "formabout.h"
#include "formdonate.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionT_ng_nh_b_n_triggered();
    void on_tabWidget_tabCloseRequested(int index);

    void on_mainTabWidget_tabCloseRequested(int index);

    void on_actionB_i_1_triggered();

    void on_actionH_c_B_triggered();

    void on_actionB_i_2_triggered();

    void on_actionB_i_3_triggered();

    void on_actionB_i_4_triggered();

    void on_actionB_i_5_triggered();

    void on_actionB_i_6_triggered();

    void on_actionB_i_7_triggered();

    void on_actionB_i_8_triggered();

    void on_actionB_i_9_triggered();

    void on_actionB_i_10_triggered();

    void on_actionB_i_11_triggered();

    void on_actionB_i_12_triggered();

    void on_actionB_i_13_triggered();

    void on_actionB_i_14_triggered();

    void on_actionB_i_15_triggered();

    void on_actionB_i_16_triggered();

    void on_actionB_i_17_triggered();

    void on_actionB_i_18_triggered();

    void on_actionB_i_19_triggered();

    void on_actionB_i_20_triggered();

    void on_actionTop_10_triggered();

    void on_actionChat_group_triggered();

    void on_actionT_c_gi_triggered();

    void on_actionDonate_triggered();

private:
    Ui::MainWindow *ui;
    FormYourTimeLine* timeLineForm;
    FormTheory* theoryForm;
    FormSchoolProfile* schoolProfileForm;
    FormExercise* exerciseForm;
    FormTop10* top10Form;
    FormChatGroup* chatGroupForm;
    FormAbout* aboutForm;
    FormDonate* donateForm;
};

#endif // MAINWINDOW_H
