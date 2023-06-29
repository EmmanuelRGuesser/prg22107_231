#include "delatendente.h"
#include "qdebug.h"
#include "ui_delatendente.h"
#include "dbmanager.h"
#include <QMessageBox>

delAtendente::delAtendente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delAtendente)
{
    ui->setupUi(this);
}

delAtendente::~delAtendente()
{
    delete ui;
}

void delAtendente::on_btBuscar_clicked()
{
    QString _cpf = ui->leCPF->text();
    QVariantMap atendenteData = DbAtendente::getInstance()->atendenteData(_cpf);

    if (!atendenteData.isEmpty()) {
        QString nome = atendenteData["nome"].toString();

        QMessageBox msgBox;
        msgBox.setWindowTitle("Confirmação");
        msgBox.setText(QString("Deseja excluir %1?").arg(nome));
        QPushButton* confirmar = msgBox.addButton("Confirmar", QMessageBox::YesRole);
        msgBox.addButton("Cancelar", QMessageBox::NoRole);
        msgBox.exec();

        if (msgBox.clickedButton() == confirmar) {
            qDebug() << "confirmou";
            DbAtendente::getInstance()->removeAtendente(_cpf);
        } else {
            qDebug() << "cancelou";
            msgBox.close();
        }

    } else {
        QMessageBox::information(this,"","O CPF não registrado.");
    }
    this->close();

}


