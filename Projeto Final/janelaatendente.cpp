#include "janelaatendente.h"
#include "ui_janelaatendente.h"
#include "dbmanager.h"
#include "addpaciente.h"
#include "modpaciente.h"
#include "novaconsulta.h"
#include "buscaconsulta.h"

JanelaAtendente::JanelaAtendente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JanelaAtendente)
{
    ui->setupUi(this);
    QString nome =DbAtendente::getInstance()->getAtendenteAtual();
    ui->laAtendente->setText(QString("Olá Atendente %1").arg(nome));
}

JanelaAtendente::~JanelaAtendente()
{
    delete ui;
}

void JanelaAtendente::on_btAddPaciente_clicked()
{
    addPaciente _addPaciente;
    _addPaciente.exec();
}


void JanelaAtendente::on_btModPaciente_clicked()
{
    modPaciente _modPaciente;
    _modPaciente.exec();
}


void JanelaAtendente::on_btAddConsulta_clicked()
{
    novaConsulta _novaConsulta;
    _novaConsulta.exec();
}


void JanelaAtendente::on_pushButton_clicked()
{
    buscaConsulta _buscaConsulta;
    _buscaConsulta.exec();
}

