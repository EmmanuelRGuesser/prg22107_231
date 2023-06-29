#include "modmedico.h"
#include "ui_modmedico.h"
#include "dbmanager.h"
#include <QMessageBox>


modMedico::modMedico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modMedico)
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

modMedico::~modMedico()
{
    delete ui;
}


void modMedico::on_btBuscar_clicked()
{
    QString _cpf = ui->leCPF->text();
    QVariantMap medicoData = DbMedico::getInstance()->medicoData(_cpf);

    if(!medicoData.isEmpty()){
        ui->leNome->setText(medicoData["nome"].toString());
        ui->leContato->setText(medicoData["contato"].toString());
        ui->leSenha->setText(medicoData["senha"].toString());
        ui->cbEspecialidade->setCurrentText(medicoData["especialidade"].toString());
    }else{
        QMessageBox::information(this,"","Medico não encontrado.");
    }
}


void modMedico::on_btSalvar_clicked()
{
    QString _nome = ui->leNome->text();
    QString _contato = ui->leContato->text();
    QString _senha = ui->leSenha->text();
    QString _cpf = ui->leCPF->text();
    QString _especialidade=ui->cbEspecialidade->currentText();

    if(DbMedico::getInstance()->modMedico(_cpf, _nome, _contato, _senha, _especialidade)){
        QMessageBox::information(this,"","Cadastro alterado com sucesso.");
    }else{
        QMessageBox::information(this,"","Erro ao alterar o cadastro.");
    }
    this->close();
}

