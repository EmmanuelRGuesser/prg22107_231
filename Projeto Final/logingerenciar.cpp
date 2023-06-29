#include "logingerenciar.h"
#include "ui_logingerenciar.h"
#include "gerenciar.h"

loginGerenciar::loginGerenciar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginGerenciar)
{
    ui->setupUi(this);

    ui->LESenhaGeren->setText("010203");
}

loginGerenciar::~loginGerenciar()
{
    delete ui;
}

void loginGerenciar::on_BTLoginGeren_clicked()
{
    QString Senha= ui->LESenhaGeren->text();

    QString SenhaCorreta = "010203";

    if(Senha == SenhaCorreta){
        this->close();
        gerenciar _gerenciar;
        _gerenciar.exec();

    }
    else{
        ui->LoginGerenCheck->setText("Senha incorreta");
        ui->LESenhaGeren->clear();
    }
}

