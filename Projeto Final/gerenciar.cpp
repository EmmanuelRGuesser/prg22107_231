#include "gerenciar.h"
#include "ui_gerenciar.h"
#include "addatendente.h"
#include "delatendente.h"
#include "modatendente.h"
#include "addmedico.h"
#include "delMedico.h"
#include "modmedico.h"

gerenciar::gerenciar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gerenciar)
{
    ui->setupUi(this);

}

gerenciar::~gerenciar()
{
    delete ui;
}


void gerenciar::on_addAtendente_clicked()
{
    addAtendente _addAtendente;
    _addAtendente.exec();
}


void gerenciar::on_delAtendente_clicked()
{
    delAtendente _delAtendente;
    _delAtendente.exec();
}


void gerenciar::on_modAtendente_clicked()
{
    modAtendente _modAtendente;
    _modAtendente.exec();
}


void gerenciar::on_addMedico_clicked()
{
    addMedico _addMedico;
    _addMedico.exec();
}


void gerenciar::on_delMedico_clicked()
{
    delMedico _delMedico;
    _delMedico.exec();
}


void gerenciar::on_modMedico_clicked()
{
    modMedico _modMedico;
    _modMedico.exec();
}

