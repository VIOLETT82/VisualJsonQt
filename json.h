#ifndef JSON_H
#define JSON_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class JSON; }
QT_END_NAMESPACE

class JSON : public QMainWindow
{
    Q_OBJECT

public:
    JSON(QWidget *parent = nullptr);
    ~JSON();

private:
    Ui::JSON *ui;
};
#endif // JSON_H
