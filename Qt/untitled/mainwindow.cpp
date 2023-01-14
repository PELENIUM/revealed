#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <string>
#include <iostream>
#include <filesystem>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), 
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
delete ui;
}

void MainWindow::on_pushButton_clicked() {
std::filesystem::path path = "python/main.py";
QString str1 = ui -> lineEdit_1 -> text();
QString str2 = ui -> lineEdit_2 -> text();
std::string command = "python " + path.u8string() + " " + str1.toStdString() + " " + str2.toStdString();
std::system(command.c_str());
}