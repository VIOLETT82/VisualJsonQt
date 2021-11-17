#ifndef DIALOG_SIMPLEMENTINPUT_H
#define DIALOG_SIMPLEMENTINPUT_H

#include <QDialog>

namespace Ui {
class Dialog_Simplementinput;
}

class Dialog_Simplementinput : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Simplementinput(QWidget *parent = nullptr);
    ~Dialog_Simplementinput();

private:
    Ui::Dialog_Simplementinput *ui;
};

#endif // DIALOG_SIMPLEMENTINPUT_H
