#ifndef KANBOARD_H
#define KANBOARD_H

#include <QMainWindow>
#include "secdialog.h"

namespace Ui {
class kanboard;
}

class kanboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit kanboard(QWidget *parent = 0);
    ~kanboard();

private:
    Ui::kanboard *ui;
    secDialog* mySecDiag;

private slots:
    void createKanban();
    void on_update_triggered();
};

#endif // KANBOARD_H
