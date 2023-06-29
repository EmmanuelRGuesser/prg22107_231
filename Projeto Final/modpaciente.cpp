#include "modpaciente.h"
#include "ui_modpaciente.h"
#include "dbmanager.h"
#include <QMessageBox>

modPaciente::modPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modPaciente)
{
    ui->setupUi(this);
}

modPaciente::~modPaciente()
{
    delete ui;
}

void modPaciente::on_btBuscar_clicked()
{
    QString _cpf = ui->leCPF->text();
    QVariantMap pacienteData = DbPaciente::getInstance()->pacienteData(_cpf);

    if(!pacienteData.isEmpty()){
        ui->leNome->setText(pacienteData["nome"].toString());
        ui->leContato->setText(pacienteData["contato"].toString());
    }else{
        QMessageBox::information(this,"","Atendente não encontrado.");
    }
}


void modPaciente::on_btSalvar_clicked()
{
    QString _nome = ui->leNome->text();
    QString _contato = ui->leContato->text();
    QString _cpf = ui->leCPF->text();

    if(DbPaciente::getInstance()->modPaciente(_cpf, _nome, _contato)){
        QMessageBox::information(this,"","Cadastro alterado com sucesso.");
    }else{
        QMessageBox::information(this,"","Erro ao alterar o cadastro.");
    }
    this->close();
}

