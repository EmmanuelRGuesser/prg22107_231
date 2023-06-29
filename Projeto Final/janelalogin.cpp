#include "janelalogin.h"
#include "ui_janelalogin.h"
#include "janelaatendente.h"
#include "janelamedico.h"
#include "logingerenciar.h"
#include "dbmanager.h"

// Caminho para o database
static const QString path = "DataBase.db";

/*
    DbAtendente *tmp;
    tmp = DbAtendente::getInstance();
    tmp->'metodo qualquer'
*/

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);

    initDb(path);
    DbAtendente::getInstance()->createTable();
    DbMedico::getInstance()->createTable();
    DbPaciente::getInstance()->createTable();
    DbConsulta::getInstance()->createTable();

    ui->LeCPF->setText("11122233344");
    ui->LeSenha->setText("123");
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}

void JanelaLogin::on_BtLogin_clicked()
{
    QString CPF=ui->LeCPF ->text();
    QString senha=ui->LeSenha->text();

    if(DbAtendente::getInstance()->LoginAtendente(CPF,senha)){
        this->close();
        JanelaAtendente _JanelaAtendente;
        _JanelaAtendente.setModal(true);
        _JanelaAtendente.exec();
    }else if(DbMedico::getInstance()->LoginMedico(CPF,senha)){
        this->close();
        janelaMedico _janelaMedico;
        _janelaMedico.setModal(true);
        _janelaMedico.exec();
    }else{
        ui->MsgLogin->setText("Login incorreto");
        ui->LeCPF->setFocus();
    }
}

void JanelaLogin::on_Gerenciar_clicked()
{
    loginGerenciar _loginGerenciar;
    _loginGerenciar.exec();
}

