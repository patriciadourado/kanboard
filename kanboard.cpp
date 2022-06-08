#include "kanboard.h"
#include "ui_kanboard.h"

kanboard::kanboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kanboard)
{
    ui->setupUi(this);
    this->setFixedSize(877,647);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);

    QPalette e1 = ui->todoEdit->palette();
    e1.setColor(QPalette::Base, QColor(255,255,127)); // BG
    e1.setColor(QPalette::Text, Qt::white); // (plain) TEXT
    ui->todoEdit->setPalette(e1);

    QPalette e2 = ui->doingEdit->palette();
    e2.setColor(QPalette::Base, QColor(255,219,252)); // BG
    e2.setColor(QPalette::Text, Qt::white); // (plain) TEXT
    ui->doingEdit->setPalette(e2);

    QPalette e3 = ui->doneEdit->palette();
    e3.setColor(QPalette::Base, QColor(164,255,185)); // BG
    e3.setColor(QPalette::Text, Qt::white); // (plain) TEXT
    ui->doneEdit->setPalette(e3);

    QPalette e4 = ui->testingEdit->palette();
    e4.setColor(QPalette::Base, QColor(193,244,255)); // BG
    e4.setColor(QPalette::Text, Qt::white); // (plain) TEXT
    ui->testingEdit->setPalette(e4);

    connect(ui->AddKanban,
        SIGNAL(clicked()),
        this,
        SLOT(createKanban()));
}

kanboard::~kanboard()
{
    delete ui;
}

void kanboard::on_update_triggered(){
    if(mySecDiag->getTaskName() != ""){
        ui->todoEdit->addItem(mySecDiag->getTaskName());//Add task from dialog to mainWindow
    }
}

void kanboard::createKanban(){

    mySecDiag = new secDialog();
    mySecDiag->setFixedSize(195,129);
    mySecDiag->show();

    ui->todoEdit->setStyleSheet("color: #000000");

    connect(mySecDiag,
    SIGNAL(update_triggered(std::string)),
    this,
    SLOT(on_update_triggered()));
}
