#include "modatendente.h"
#include "ui_modatendente.h"
#include "dbmanager.h"
#include <QMessageBox>

modAtendente::modAtendente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modAtendente)
{
    ui->setupUi(this);
}

modAtendente::~modAtendente()
{
    delete ui;
}

void modAtendente::on_btBuscar_clicked()
{
    QString _cpf = ui->leCPF->text();
    QVariantMap atendenteData = DbAtendente::getInstance()->atendenteData(_cpf);

    if(!atendenteData.isEmpty()){
        ui->leNome->setText(atendenteData["nome"].toString());
        ui->leContato->setText(atendenteData["contato"].toString());
        ui->leSenha->setText(atendenteData["senha"].toString());
    }else{
        QMessageBox::information(this,"","Atendente não encontrado.");
    }
}


void modAtendente::on_btSalvar_clicked()
{
    QString _nome = ui->leNome->text();
    QString _contato = ui->leContato->text();
    QString _senha = ui->leSenha->text();
    QString _cpf = ui->leCPF->text();

    if(DbAtendente::getInstance()->modAtendente(_cpf, _nome, _contato, _senha)){
        QMessageBox::information(this,"","Cadastro alterado com sucesso.");
    }else{
        QMessageBox::information(this,"","Erro ao alterar o cadastro.");
    }
    this->close();
}

