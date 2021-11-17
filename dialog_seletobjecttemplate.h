#ifndef DIALOG_SELETOBJECTTEMPLATE_H
#define DIALOG_SELETOBJECTTEMPLATE_H

#include <QDialog>

namespace Ui {
class Dialog_SeletObjectTemplate;
}

class Dialog_SeletObjectTemplate : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_SeletObjectTemplate(QWidget *parent = nullptr);
    ~Dialog_SeletObjectTemplate();

private:
    Ui::Dialog_SeletObjectTemplate *ui;
};

#endif // DIALOG_SELETOBJECTTEMPLATE_H
