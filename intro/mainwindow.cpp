#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QMessageBox>  // Pour afficher le message

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connecte le bouton à la fonction
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::afficherMessage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::afficherMessage()
{
    QMessageBox::information(this, "Message", "evoyer avec succes  !");
}
