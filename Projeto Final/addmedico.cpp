#include "addmedico.h"
#include "ui_addmedico.h"
#include "dbmanager.h"
#include <QMessageBox>

addMedico::addMedico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMedico)
{
    ui->setupUi(this);

    QString especialidades[13]={
        "",
        "Cardiologista",
        "Dermatologista",
        "Endocrinologista",
        "Gastroenterologista",
        "Neurologista",
        "Obstetra/Ginecologista",
        "Oftalmologista",
        "Ortopedista",
        "Otorrinolaringologista",
        "Pediatra",
        "Psiquiatra",
        "Médico Clínico Geral"
    };

    for(int i=0;i<13;i++){
        ui->cbEspecialidade->addItem(especialidades[i]);
    }
}

addMedico::~addMedico()
{
    delete ui;
}

void addMedico::on_btSalvar_clicked()
{
    QString Nome=ui->leNome ->text();
    QString CPF=ui->leCPF ->text();
    QString Contato=ui->leContato ->text();
    QString Especialidade=ui->cbEspecialidade->currentText();
    QString Senha=ui->leSenha ->text();

    if(DbMedico::getInstance()->MedicoExists(CPF)){
        QMessageBox::information(this,"","O CPF já possui cadastro.");
    }
    else{
        DbMedico::getInstance()->addMedico(Nome,CPF,Contato,Especialidade,Senha);
        QMessageBox::information(this,"","Medico cadastrado com sucesso.");
    }
    this->close();
}

