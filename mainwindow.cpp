#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
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


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::critical(this,"Error","Ошибка");
}


void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::warning(this,"Warning","Предупреждение");
}


void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox::information(this,"Information","Информация");
}

