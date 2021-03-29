#ifndef GUI_C_H
#define GUI_C_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class GUI_C; }
QT_END_NAMESPACE

class GUI_C : public QMainWindow
{
    Q_OBJECT

public:
    GUI_C(QWidget *parent = nullptr);
    ~GUI_C();

private slots:

    void on_runbtn_clicked();

    void on_stopbtn_clicked();

    void on_nextbtn_clicked();

    void on_clearbtn_clicked();

private:
    Ui::GUI_C *ui;
};
#endif // GUI_C_H