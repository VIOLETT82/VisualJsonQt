#include "json.h"
#include "ui_json.h"

JSON::JSON(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JSON)
{
    ui->setupUi(this);
}

JSON::~JSON()
{
    delete ui;
}

