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


void MainWindow::on_ExecutarConversao_clicked()
{
    try{
        Pedro::MudarBase base(ui->InputNumero->text().toInt(), ui->InputBase->currentText().toInt());
        ui->ImprimirResultado->setText(base.calcularMudancaBase());
    }catch(QString &erro){
        QMessageBox::critical(this, "Erro ", erro);
    }
}
