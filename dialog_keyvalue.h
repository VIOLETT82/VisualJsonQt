#ifndef DIALOG_KEYVALUE_H
#define DIALOG_KEYVALUE_H

#include <QDialog>

namespace Ui {
class Dialog_KeyValue;
}

class Dialog_KeyValue : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_KeyValue(QWidget *parent = nullptr);
    ~Dialog_KeyValue();

private:
    Ui::Dialog_KeyValue *ui;
};

#endif // DIALOG_KEYVALUE_H
