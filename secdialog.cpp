#include "secdialog.h"
#include "ui_secdialog.h"

#include "kanboard.h"

secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);

    setTaskName("");
    connect(ui->AddTask,
        SIGNAL(clicked()),
        this,
        SLOT(on_AddTask_clicked()));
}

secDialog::~secDialog()
{
    delete ui;
}

void secDialog::setTaskName(QString newTask){
    taskName = newTask;
}

QString secDialog::getTaskName(){
    return taskName;
}

void secDialog::on_AddTask_clicked()
{
    setTaskName(ui->Task->toPlainText());
    close();
    emit update_triggered("task added");
}
