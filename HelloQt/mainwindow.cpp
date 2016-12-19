#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyle>
#include "qdesktopwidget.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),timeLineForm(NULL),
    theoryForm(NULL),
    schoolProfileForm(NULL),
    exerciseForm(NULL),
    top10Form(NULL),
    chatGroupForm(NULL),
    aboutForm(NULL),
    donateForm(NULL),
    ui(new Ui::MainWindow)
{
    //set size of the window
    setFixedSize(1024, 680);

    //center screen
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width()-this->width()) / 2;
    int y = (screenGeometry.height()-this->height()) / 2;
    this->move(x, y);

    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionT_ng_nh_b_n_triggered()
{
    if (timeLineForm == NULL) {
        timeLineForm = new FormYourTimeLine();
    }

    ui->mainTabWidget->addTab(timeLineForm, "Tường nhà bạn");
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->mainTabWidget->removeTab(index);
}

void MainWindow::on_mainTabWidget_tabCloseRequested(int index)
{
    ui->mainTabWidget->removeTab(index);
}

void MainWindow::on_actionH_c_B_triggered()
{
    if (schoolProfileForm == NULL) {
        schoolProfileForm = new FormSchoolProfile();
    }

    ui->mainTabWidget->addTab(schoolProfileForm, "Học bạ của bạn");
}

void MainWindow::on_actionB_i_1_triggered()
{
    if (theoryForm == NULL) {
      theoryForm = new FormTheory();
    }

   ui->mainTabWidget->addTab(theoryForm, "Lý thuyết bài 1");
}

void MainWindow::on_actionB_i_2_triggered()
{
    if (theoryForm == NULL) {
      theoryForm = new FormTheory();
    }

   ui->mainTabWidget->addTab(theoryForm, "Lý thuyết bài 2");
}

void MainWindow::on_actionB_i_3_triggered()
{
    if (theoryForm == NULL) {
      theoryForm = new FormTheory();
    }

   ui->mainTabWidget->addTab(theoryForm, "Lý thuyết bài 3");
}

void MainWindow::on_actionB_i_4_triggered()
{
    if (theoryForm == NULL) {
      theoryForm = new FormTheory();
    }

   ui->mainTabWidget->addTab(theoryForm, "Lý thuyết bài 4");
}

void MainWindow::on_actionB_i_5_triggered()
{
    if (theoryForm == NULL) {
      theoryForm = new FormTheory();
    }

   ui->mainTabWidget->addTab(theoryForm, "Lý thuyết bài 5");
}

void MainWindow::on_actionB_i_6_triggered()
{
    if (theoryForm == NULL) {
      theoryForm = new FormTheory();
    }

   ui->mainTabWidget->addTab(theoryForm, "Lý thuyết bài 6");
}

void MainWindow::on_actionB_i_7_triggered()
{
    if (theoryForm == NULL) {
      theoryForm = new FormTheory();
    }

   ui->mainTabWidget->addTab(theoryForm, "Lý thuyết bài 7");
}

void MainWindow::on_actionB_i_8_triggered()
{
    if (theoryForm == NULL) {
      theoryForm = new FormTheory();
    }

   ui->mainTabWidget->addTab(theoryForm, "Lý thuyết bài 8");
}

void MainWindow::on_actionB_i_9_triggered()
{
    if (theoryForm == NULL) {
      theoryForm = new FormTheory();
    }

   ui->mainTabWidget->addTab(theoryForm, "Lý thuyết bài 9");
}

void MainWindow::on_actionB_i_10_triggered()
{
    if (theoryForm == NULL) {
      theoryForm = new FormTheory();
    }

   ui->mainTabWidget->addTab(theoryForm, "Lý thuyết bài 10");
}

//for exercise
void MainWindow::on_actionB_i_11_triggered()
{
    if (exerciseForm == NULL) {
      exerciseForm = new FormExercise();
    }

   ui->mainTabWidget->addTab(exerciseForm, "Thực hành bài 1");
}

void MainWindow::on_actionB_i_12_triggered()
{
    if (exerciseForm == NULL) {
      exerciseForm = new FormExercise();
    }

   ui->mainTabWidget->addTab(exerciseForm, "Thực hành bài 2");
}

void MainWindow::on_actionB_i_13_triggered()
{
    if (exerciseForm == NULL) {
      exerciseForm = new FormExercise();
    }

   ui->mainTabWidget->addTab(exerciseForm, "Thực hành bài 3");
}

void MainWindow::on_actionB_i_14_triggered()
{
    if (exerciseForm == NULL) {
      exerciseForm = new FormExercise();
    }

   ui->mainTabWidget->addTab(exerciseForm, "Thực hành bài 4");
}

void MainWindow::on_actionB_i_15_triggered()
{
    if (exerciseForm == NULL) {
      exerciseForm = new FormExercise();
    }

   ui->mainTabWidget->addTab(exerciseForm, "Thực hành bài 5");
}

void MainWindow::on_actionB_i_16_triggered()
{
    if (exerciseForm == NULL) {
      exerciseForm = new FormExercise();
    }

   ui->mainTabWidget->addTab(exerciseForm, "Thực hành bài 6");
}

void MainWindow::on_actionB_i_17_triggered()
{
    if (exerciseForm == NULL) {
      exerciseForm = new FormExercise();
    }

   ui->mainTabWidget->addTab(exerciseForm, "Thực hành bài 7");
}

void MainWindow::on_actionB_i_18_triggered()
{
    if (exerciseForm == NULL) {
      exerciseForm = new FormExercise();
    }

   ui->mainTabWidget->addTab(exerciseForm, "Thực hành bài 8");
}

void MainWindow::on_actionB_i_19_triggered()
{
    if (exerciseForm == NULL) {
      exerciseForm = new FormExercise();
    }

   ui->mainTabWidget->addTab(exerciseForm, "Thực hành bài 9");
}

void MainWindow::on_actionB_i_20_triggered()
{
    if (exerciseForm == NULL) {
      exerciseForm = new FormExercise();
    }

   ui->mainTabWidget->addTab(exerciseForm, "Thực hành bài 10");
}

void MainWindow::on_actionTop_10_triggered()
{
    if (top10Form == NULL) {
      top10Form = new FormTop10();
    }

   ui->mainTabWidget->addTab(top10Form, "Top 10 thành viên");
}

void MainWindow::on_actionChat_group_triggered()
{
    if (chatGroupForm == NULL) {
      chatGroupForm = new FormChatGroup();
    }

   ui->mainTabWidget->addTab(chatGroupForm, "Chat group");
}

void MainWindow::on_actionT_c_gi_triggered()
{
    if (aboutForm == NULL) {
      aboutForm = new FormAbout();
    }

   ui->mainTabWidget->addTab(aboutForm, "Thông tin tác giả");
}

void MainWindow::on_actionDonate_triggered()
{
    if (donateForm == NULL) {
      donateForm = new FormDonate();
    }

   ui->mainTabWidget->addTab(donateForm, "Ủng hộ tác giả");
}
