#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mTasks() //Initialisierung des Vectors
{

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
    qDebug() << "Adding new task";
    Task* task = new Task("Untitled task");
    mTasks.append(task);
    ui->tasksLayout->addWidget(task);
}


void MainWindow::printMessage() {
    qDebug() << "Button geklickt";
}
