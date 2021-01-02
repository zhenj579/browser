#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_backButton_clicked()
{
    ui->webView->back();
}

void MainWindow::on_urlLineEdit_returnPressed()
{
    QString url = ui->urlLineEdit->text();
    ui->webView->load(url);
    ui->webView->show();
}

void MainWindow::on_forwardButton_clicked()
{
    ui->webView->forward();
}
