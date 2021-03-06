#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Search_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Searching started");
    msgBox.exec();
}

void MainWindow::on_action_Exit_triggered()
{
    this->close();
}
