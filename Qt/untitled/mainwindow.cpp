#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <string>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString str1 = ui -> lineEdit -> text();
    QString str2 = ui -> lineEdit_2 -> text();
    std::string str = "python <путь> " + str1.toStdString() + " " + str2.toStdString();
    std::system(str.c_str());
}
