#include "addatendente.h"
#include "ui_addatendente.h"
#include "dbmanager.h"
#include <QMessageBox>

addAtendente::addAtendente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addAtendente)
{
    ui->setupUi(this);
}

addAtendente::~addAtendente()
{
    delete ui;
}

void addAtendente::on_btSalvar_clicked()
{
    QString Nome=ui->leNome ->text();
    QString CPF=ui->leCPF ->text();
    QString Contato=ui->leContato ->text();
    QString Senha=ui->leSenha ->text();

    if(DbAtendente::getInstance()->AtendenteExists(CPF)){
        QMessageBox::information(this,"","O CPF já possui cadastro.");
    }
    else{
        DbAtendente::getInstance()->addAtendente(Nome,CPF,Contato,Senha);
        QMessageBox::information(this,"","Atendente cadastrado com sucesso.");
    }
    this->close();
}

