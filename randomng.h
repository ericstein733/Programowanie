#ifndef RANDOMNG_H
#define RANDOMNG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class randomng; }
QT_END_NAMESPACE

class randomng : public QMainWindow
{
    Q_OBJECT

public:
    randomng(QWidget *parent = nullptr);
    ~randomng();
private slots: void on_los_clicked();
private:
    Ui::randomng *ui;
};
#endif // RANDOMNG_H
