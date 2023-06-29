#include "addpaciente.h"
#include "ui_addpaciente.h"
#include "dbmanager.h"
#include <QMessageBox>

addPaciente::addPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addPaciente)
{
    ui->setupUi(this);
}

addPaciente::~addPaciente()
{
    delete ui;
}

void addPaciente::on_btSalvar_clicked()
{
    QString Nome=ui->leNome ->text();
    QString CPF=ui->leCPF ->text();
    QString Contato=ui->leContato ->text();

    if(DbPaciente::getInstance()->PacienteExists(CPF)){
        QMessageBox::information(this,"","O CPF já possui cadastro.");
    }
    else{
        DbPaciente::getInstance()->addPaciente(Nome,CPF,Contato);
        QMessageBox::information(this,"","Paciente cadastrado com sucesso.");
    }
    this->close();
}

