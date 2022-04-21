#include "mainwindow.h" // un comentario de prueba
#include "ui_mainwindow.h"
#include "firstdialog.h"
#include <QDialog>
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

void MainWindow::on_pushButton_clicked()
{
    FirstDialog FDialog;
    if ( FDialog.exec() == QDialog::Accepted ){
        QMessageBox::information(this, "Info", "Accepted");
    }else {
        QMessageBox::information(this, "Info", "Rejected");
    }
}
