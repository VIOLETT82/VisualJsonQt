#include "dialog_seletobjecttemplate.h"
#include "ui_dialog_seletobjecttemplate.h"

Dialog_SeletObjectTemplate::Dialog_SeletObjectTemplate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_SeletObjectTemplate)
{
    ui->setupUi(this);
}

Dialog_SeletObjectTemplate::~Dialog_SeletObjectTemplate()
{
    delete ui;
}
