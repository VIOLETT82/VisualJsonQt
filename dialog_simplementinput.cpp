#include "dialog_simplementinput.h"
#include "ui_dialog_simplementinput.h"

Dialog_Simplementinput::Dialog_Simplementinput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Simplementinput)
{
    ui->setupUi(this);
}

Dialog_Simplementinput::~Dialog_Simplementinput()
{
    delete ui;
}
