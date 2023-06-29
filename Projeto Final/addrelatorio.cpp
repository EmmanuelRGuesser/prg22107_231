#include "addrelatorio.h"
#include "ui_addrelatorio.h"
#include "dbmanager.h"
#include <QMessageBox>

addRelatorio::addRelatorio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addRelatorio)
{
    ui->setupUi(this);

}

addRelatorio::~addRelatorio()
{
    delete ui;
}

void addRelatorio::on_btBuscar_clicked()
{
    QString cpf = ui->leCPF->text();
    QDate _data = ui->dateEdit->date();
    QString data = _data.toString("dd/MM/yyyy");
    QString medico = DbMedico::getInstance()->getMedicoAtual();

    if(DbConsulta::getInstance()->ConsultaExists(cpf,data,medico)){
        QVariantMap consulta = DbConsulta::getInstance()->consultaData(cpf,data,medico);
        ui->teProcedimento->setText(consulta["procedimento"].toString());
        ui->teRelatorio->setText(consulta["relatorio"].toString());
    } else {
        QMessageBox::information(this,"","Consulta não encontrada!");
    }
}


void addRelatorio::on_btSalvar_clicked()
{
    QString cpf = ui->leCPF->text();
    QDate _data = ui->dateEdit->date();
    QString data = _data.toString("dd/MM/yyyy");
    QString medico = DbMedico::getInstance()->getMedicoAtual();

    QString relatorio = ui->teRelatorio->toPlainText();

    if(DbConsulta::getInstance()->ConsultaExists(cpf,data,medico)){
        DbConsulta::getInstance()->addRelatorio(cpf,data,medico,relatorio);
    } else {
        QMessageBox::information(this,"","Consulta não encontrada!");
    }
}

