#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->optionsWidget->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AuthClientToTable()
{
    QLabel *label = new QLabel(ui->clientsWidget);
    label->show();
    label->setGeometry(0,LabelBoxesY,1200,50);
    label->setStyleSheet("QLabel{background-color: black; border:2px solid black; border-color: black;}");

    QPushButton *button = new QPushButton(ui->clientsWidget);
    button->setStyleSheet("background: rgba(0,0,0,0);");
    button->setGeometry(0,LabelBoxesY,1200,50);
    button->show();

    QObject::connect(button, &QPushButton::pressed, this, [&]() {

    });

    ipLabel = new QLabel(ui->clientsWidget);
    ipLabel->setAlignment(Qt::AlignCenter);
    ipLabel->setText("123");
    ipLabel->show();
    ipLabel->setGeometry(1,LabelBoxesY,161,50);
    ipLabel->setStyleSheet("QLabel{font: 600 14pt \"Segoe UI\";color: rgb(99, 180, 181);border: 1px solid rgb(99, 180, 181);}");

    pcNameLabel = new QLabel(ui->clientsWidget);
    pcNameLabel->setAlignment(Qt::AlignCenter);
    pcNameLabel->show();
    pcNameLabel->setGeometry(161,LabelBoxesY,121,50);
    pcNameLabel->setStyleSheet("QLabel{font: 600 8pt \"Segoe UI\";color: rgb(99, 180, 181);border: 1px solid rgb(99, 180, 181);}");

    userNameLabel = new QLabel(ui->clientsWidget);
    userNameLabel->setAlignment(Qt::AlignCenter);
    userNameLabel->show();
    userNameLabel->setGeometry(281,LabelBoxesY,111,50);
    userNameLabel->setStyleSheet("QLabel{font: 600 10pt \"Segoe UI\";color: rgb(99, 180, 181);border: 1px solid rgb(99, 180, 181);}");

    installDateLabel = new QLabel(ui->clientsWidget);
    installDateLabel->setAlignment(Qt::AlignCenter);
    installDateLabel->show();
    installDateLabel->setGeometry(391,LabelBoxesY,141,50);
    installDateLabel->setStyleSheet("QLabel{font: 600 10pt \"Segoe UI\";color: rgb(99, 180, 181);border: 1px solid rgb(99, 180, 181);}");

    osLabel = new QLabel(ui->clientsWidget);
    osLabel->setAlignment(Qt::AlignCenter);
    osLabel->show();
    osLabel->setGeometry(531,LabelBoxesY,181,50);
    osLabel->setStyleSheet("QLabel{font: 600 10pt \"Segoe UI\";color: rgb(99, 180, 181);border: 1px solid rgb(99, 180, 181);}");

    osLanguageLabel = new QLabel(ui->clientsWidget);
    osLanguageLabel->setAlignment(Qt::AlignCenter);
    osLanguageLabel->show();
    osLanguageLabel->setGeometry(711,LabelBoxesY,141,50);
    osLanguageLabel->setStyleSheet("QLabel{font: 600 10pt \"Segoe UI\";color: rgb(99, 180, 181);border: 1px solid rgb(99, 180, 181);}");

    countryLabel = new QLabel(ui->clientsWidget);
    countryLabel->setAlignment(Qt::AlignCenter);
    countryLabel->show();
    countryLabel->setGeometry(851,LabelBoxesY,121,50);
    countryLabel->setStyleSheet("QLabel{font: 600 10pt \"Segoe UI\";color: rgb(99, 180, 181);border: 1px solid rgb(99, 180, 181);}");

    camLabel = new QLabel(ui->clientsWidget);
    camLabel->setAlignment(Qt::AlignCenter);
    camLabel->show();
    camLabel->setGeometry(971,LabelBoxesY,80,50);
    camLabel->setStyleSheet("QLabel{font: 600 10pt \"Segoe UI\";color: rgb(99, 180, 181);border: 1px solid rgb(99, 180, 181);}");

    QLabel *buildVerLabel = new QLabel(ui->clientsWidget);
    buildVerLabel->setAlignment(Qt::AlignCenter);
    buildVerLabel->setText("v0.1");
    buildVerLabel->show();
    buildVerLabel->setGeometry(1050,LabelBoxesY,150,50);
    buildVerLabel->setStyleSheet("QLabel{font: 600 10pt \"Segoe UI\";color: rgb(99, 180, 181);border: 1px solid rgb(99, 180, 181);}");

    button->raise();

   // getClientInformation(socket);

    LabelBoxesY = LabelBoxesY + 63;
}
