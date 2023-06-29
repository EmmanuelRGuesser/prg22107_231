#include "delmedico.h"
#include "qdebug.h"
#include "qmessagebox.h"
#include "ui_delmedico.h"
#include "dbmanager.h"

delMedico::delMedico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delMedico)
{
    ui->setupUi(this);
}

delMedico::~delMedico()
{
    delete ui;
}

void delMedico::on_btBuscar_clicked()
{
    QString _cpf = ui->leCPF->text();
    QVariantMap atendenteData = DbMedico::getInstance()->medicoData(_cpf);

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
            DbMedico::getInstance()->removeMedico(_cpf);
        } else {
            qDebug() << "cancelou";
            msgBox.close();
        }

    } else {
        QMessageBox::information(this,"","O CPF não registrado.");
    }
    ui->leCPF->clear();
    this->close();
}

