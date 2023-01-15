#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <fstream>
#include <string>
#include <cctype>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), 
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
delete ui;
}

void MainWindow::on_pushButton_clicked() {
    setlocale(LC_ALL, "ru");
    QString name = ui -> lineEdit -> text();
    QString price = ui -> lineEdit_2 -> text();

    bool flag = true;

    for (int i = 0; i < price.size(); i++){
        if (isdigit(price.toStdString()[i]))
            continue;
        else{
            flag = false;
            break;
        }
    }

    if (flag == false){
        QMessageBox::warning(this, "Ошибка", "Неверный формат введенных данных");
        ui -> lineEdit -> clear();
        ui -> lineEdit_2 ->clear();
    }
    else{
        std::ofstream file("file.txt", std::ios::binary|std::ios::app);
        file << name.toStdString() << " " << price.toStdString() << std::endl;
        file.close();
        ui -> lineEdit -> clear();
        ui -> lineEdit_2 ->clear();
    }
}
