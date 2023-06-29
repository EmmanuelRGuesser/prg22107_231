#include "buscaconsulta.h"
#include "ui_buscaconsulta.h"
#include "dbmanager.h"
#include <QMessageBox>
#include <QDebug>

QDate _data;
QString medico;

buscaConsulta::buscaConsulta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buscaConsulta)
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

buscaConsulta::~buscaConsulta()
{
    delete ui;
}

void buscaConsulta::on_btBuscar_clicked()
{
    QString cpf = ui->leCPF->text();
    _data = ui->dateEdit->date();
    QString data = _data.toString("dd/MM/yyyy");
    medico = ui->cbMedicos->currentText();

    if(DbConsulta::getInstance()->ConsultaExists(cpf,data,medico)){
        QVariantMap consulta = DbConsulta::getInstance()->consultaData(cpf,data,medico);
        ui->leProcedimento->setText(consulta["procedimento"].toString());
        ui->leRelatorio->setText(consulta["relatorio"].toString());
        ui->timeEdit->setTime(consulta["horario"].toTime());
    } else {
        QMessageBox::information(this,"","Consulta não encontrada!");
    }
}


void buscaConsulta::on_cbEspecialidade_currentTextChanged(const QString &especialidade)
{
    ui->cbMedicos->clear();
    QStringList nomes = DbMedico::getInstance()->medEspecialidade(especialidade);
    for(const QString& nome : nomes){
        ui->cbMedicos->addItem(nome);
    }
}


void buscaConsulta::on_btSalvar_clicked()
{
    QString cpf = ui->leCPF->text();
    QString dataAnt = _data.toString("dd/MM/yyyy");

    QDate _dataNova = ui->dateEdit->date();
    QString dataNova = _dataNova.toString("dd/MM/yyyy");
    QTime _horario = ui->timeEdit->time();
    QString horario = _horario.toString("HH:mm");

    QString medicoNovo = ui->cbMedicos->currentText();
    QString procedimento = ui->leProcedimento->text();

    qDebug() << cpf << dataAnt << dataNova << horario << medico << medicoNovo << procedimento;

    if(DbConsulta::getInstance()->modConsulta(cpf,dataAnt,dataNova,horario,medico,medicoNovo,procedimento)){
        QMessageBox::information(this,"","Consulta alterada com sucesso.");
        this->close();
    }else{
        QMessageBox::information(this,"","Erro ao modificar a consulta.");
    }
}

