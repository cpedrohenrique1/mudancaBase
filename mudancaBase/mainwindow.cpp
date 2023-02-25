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
        MudarBase base;
        Pilha pilha(100);
        QString saida = "";
        switch (ui->InputBase->currentText().toInt()){
        case 2:
            base.converterBinario(ui->InputNumero->text().toInt(), pilha);
            for (int i = pilha.getTopo(); i > -1; i--){
                saida += QString::number(pilha.desempilhar());
            }
            break;
        case 8:
            base.converterOctal(ui->InputNumero->text().toInt(), pilha);
            for (int i = pilha.getTopo(); i > -1; i--){
                saida += QString::number(pilha.desempilhar());
            }
            break;
        case 16:
            base.converterHexa(ui->InputNumero->text().toInt(), pilha);
            for (int i = pilha.getTopo(); i > -1; i--){
                switch(pilha.desempilhar()){
                case 'A':
                    saida+= 'A';
                    break;
                case 'B':
                    saida+= 'B';
                    break;
                case 'C':
                    saida+= 'C';
                    break;
                case 'D':
                    saida+= 'D';
                    break;
                case 'E':
                    saida+= 'E';
                    break;
                case 'F':
                    saida+= 'F';
                    break;
                default:
                    saida += QString::number(pilha.desempilhar());
                }
            }
            break;
        }
        ui->ImprimirResultado->setText(saida);
    }catch(QString &erro){
        QMessageBox::critical(this, "Erro ", erro);
    }
}

