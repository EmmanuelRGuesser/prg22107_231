#include "janelamedico.h"
#include "ui_janelamedico.h"
#include "addrelatorio.h"
#include "buscaconsulta.h"
#include "dbmanager.h"

janelaMedico::janelaMedico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janelaMedico)
{
    ui->setupUi(this);
    QString nome =DbMedico::getInstance()->getMedicoAtual();
    ui->laMedico->setText(QString("Olá Medico %1").arg(nome));

}

janelaMedico::~janelaMedico()
{
    delete ui;
}


void janelaMedico::on_btAddRelatorio_clicked()
{
    addRelatorio _addRelatorio;
    _addRelatorio.exec();
}


void janelaMedico::on_btConsHistorico_clicked()
{
    buscaConsulta _buscaConsulta;
    _buscaConsulta.exec();
}

