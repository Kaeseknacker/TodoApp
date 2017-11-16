#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {

    ui->setupUi(this);
    connect(ui->addTaskButton, &QPushButton::clicked,
            this, &MainWindow::printMessage);
    connect(ui->addTaskButton, &QPushButton::clicked,
            this, &MainWindow::addTask);
}


MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::addTask() {
    qDebug() << "User clicked on the Button!";
}


void MainWindow::printMessage() {
    qDebug() << "Button geklickt";
}
