#include "dialog_keyvalue.h"
#include "ui_dialog_keyvalue.h"

Dialog_KeyValue::Dialog_KeyValue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_KeyValue)
{
    ui->setupUi(this);
}

Dialog_KeyValue::~Dialog_KeyValue()
{
    delete ui;
}
