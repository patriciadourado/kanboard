#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
class secDialog;
}

class secDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secDialog(QWidget *parent = 0);
    ~secDialog();
    QString getTaskName();
    void setTaskName(QString newTask);

private slots:
    void on_AddTask_clicked();

private:
    Ui::secDialog *ui;
    QString taskName;

signals:
    void update_triggered(std::string update_string);
};

#endif // SECDIALOG_H
