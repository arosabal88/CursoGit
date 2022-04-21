#include "firstdialog.h"
#include "ui_firstdialog.h"
#include "seconddialog.h"
#include <QDialog>

FirstDialog::FirstDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FirstDialog)
{
    ui->setupUi(this);
}

FirstDialog::~FirstDialog()
{
    delete ui;
}

void FirstDialog::on_buttonBox_accepted()
{
    QDialog::accept();
}

void FirstDialog::on_buttonBox_rejected()
{
    QDialog::reject();
}

void FirstDialog::on_pushButton_clicked()
{
    //hide();
    SecondDialog Dialog;
    Dialog.exec();
    this->show();
    this->exec();
}
