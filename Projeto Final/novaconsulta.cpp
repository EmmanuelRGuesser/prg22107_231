#include "novaconsulta.h"
#include "ui_novaconsulta.h"
#include "dbmanager.h"
#include <QMessageBox>
#include <QDate>

novaConsulta::novaConsulta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::novaConsulta)
{
    ui->setupUi(this);

    QDate dataAtual = QDate::currentDate();
    ui->dateEdit->setDate(dataAtual);

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


novaConsulta::~novaConsulta()
{
    delete ui;
}


void novaConsulta::on_btBuscar_clicked()
{
    ui->cbMedicos->clear();
    QString especialidade = ui->cbEspecialidade->currentText();
    QStringList nomes = DbMedico::getInstance()->medEspecialidade(especialidade);
    for(const QString& nome : nomes){
        ui->cbMedicos->addItem(nome);
    }
}


void novaConsulta::on_btSalvar_clicked()
{
    QString cpf = ui->leCPF->text();

    QDate _data = ui->dateEdit->date();
    QString data = _data.toString("dd/MM/yyyy");
    QTime _horario = ui->timeEdit->time();
    QString horario = _horario.toString("HH:mm");

    QString medico = ui->cbMedicos->currentText();
    QString procedimento = ui->leProcedimento->text();

    if(DbPaciente::getInstance()->PacienteExists(cpf)){
        DbConsulta::getInstance()->novaConsulta(cpf,data,horario,medico,procedimento);
        QMessageBox::information(this,"","Consulta cadastrada com sucesso.");
        this->close();
    }else{
        QMessageBox::information(this,"","CPF não cadastrado.");
    }
}




