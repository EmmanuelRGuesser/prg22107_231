/********************************************************************************
** Form generated from reading UI file 'janelaatendente.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAATENDENTE_H
#define UI_JANELAATENDENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_JanelaAtendente
{
public:
    QLabel *laAtendente;
    QPushButton *btAddPaciente;
    QPushButton *btModPaciente;
    QPushButton *btAddConsulta;
    QPushButton *pushButton;

    void setupUi(QDialog *JanelaAtendente)
    {
        if (JanelaAtendente->objectName().isEmpty())
            JanelaAtendente->setObjectName("JanelaAtendente");
        JanelaAtendente->resize(586, 328);
        laAtendente = new QLabel(JanelaAtendente);
        laAtendente->setObjectName("laAtendente");
        laAtendente->setGeometry(QRect(30, 20, 221, 16));
        QFont font;
        font.setPointSize(12);
        laAtendente->setFont(font);
        btAddPaciente = new QPushButton(JanelaAtendente);
        btAddPaciente->setObjectName("btAddPaciente");
        btAddPaciente->setGeometry(QRect(70, 80, 141, 24));
        btAddPaciente->setFont(font);
        btModPaciente = new QPushButton(JanelaAtendente);
        btModPaciente->setObjectName("btModPaciente");
        btModPaciente->setGeometry(QRect(70, 130, 141, 24));
        btModPaciente->setFont(font);
        btAddConsulta = new QPushButton(JanelaAtendente);
        btAddConsulta->setObjectName("btAddConsulta");
        btAddConsulta->setGeometry(QRect(70, 180, 141, 24));
        btAddConsulta->setFont(font);
        pushButton = new QPushButton(JanelaAtendente);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 230, 141, 24));
        pushButton->setFont(font);

        retranslateUi(JanelaAtendente);

        QMetaObject::connectSlotsByName(JanelaAtendente);
    } // setupUi

    void retranslateUi(QDialog *JanelaAtendente)
    {
        JanelaAtendente->setWindowTitle(QCoreApplication::translate("JanelaAtendente", "Dialog", nullptr));
        laAtendente->setText(QCoreApplication::translate("JanelaAtendente", "Atendente", nullptr));
        btAddPaciente->setText(QCoreApplication::translate("JanelaAtendente", "Adicionar Paciente", nullptr));
        btModPaciente->setText(QCoreApplication::translate("JanelaAtendente", "Buscar Paciente", nullptr));
        btAddConsulta->setText(QCoreApplication::translate("JanelaAtendente", "Adicionar Consulta", nullptr));
        pushButton->setText(QCoreApplication::translate("JanelaAtendente", "Buscar Consulta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaAtendente: public Ui_JanelaAtendente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAATENDENTE_H
