/********************************************************************************
** Form generated from reading UI file 'novaconsulta.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOVACONSULTA_H
#define UI_NOVACONSULTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_novaConsulta
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leCPF;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLabel *Horario;
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *cbEspecialidade;
    QPushButton *btBuscar;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *cbMedicos;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *leProcedimento;
    QPushButton *btSalvar;

    void setupUi(QDialog *novaConsulta)
    {
        if (novaConsulta->objectName().isEmpty())
            novaConsulta->setObjectName("novaConsulta");
        novaConsulta->resize(496, 286);
        layoutWidget = new QWidget(novaConsulta);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(11, 12, 471, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        leCPF = new QLineEdit(layoutWidget);
        leCPF->setObjectName("leCPF");
        leCPF->setFont(font);

        horizontalLayout->addWidget(leCPF);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setFont(font);

        horizontalLayout_5->addWidget(dateEdit);

        Horario = new QLabel(layoutWidget);
        Horario->setObjectName("Horario");
        Horario->setFont(font);

        horizontalLayout_5->addWidget(Horario);

        timeEdit = new QTimeEdit(layoutWidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setFont(font);

        horizontalLayout_5->addWidget(timeEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        cbEspecialidade = new QComboBox(layoutWidget);
        cbEspecialidade->setObjectName("cbEspecialidade");
        cbEspecialidade->setFont(font);

        horizontalLayout_2->addWidget(cbEspecialidade);

        btBuscar = new QPushButton(layoutWidget);
        btBuscar->setObjectName("btBuscar");
        btBuscar->setFont(font);

        horizontalLayout_2->addWidget(btBuscar);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        cbMedicos = new QComboBox(layoutWidget);
        cbMedicos->setObjectName("cbMedicos");
        cbMedicos->setFont(font);

        horizontalLayout_3->addWidget(cbMedicos);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        leProcedimento = new QLineEdit(layoutWidget);
        leProcedimento->setObjectName("leProcedimento");
        leProcedimento->setFont(font);

        horizontalLayout_4->addWidget(leProcedimento);


        verticalLayout->addLayout(horizontalLayout_4);

        btSalvar = new QPushButton(layoutWidget);
        btSalvar->setObjectName("btSalvar");
        btSalvar->setFont(font);

        verticalLayout->addWidget(btSalvar);


        retranslateUi(novaConsulta);

        QMetaObject::connectSlotsByName(novaConsulta);
    } // setupUi

    void retranslateUi(QDialog *novaConsulta)
    {
        novaConsulta->setWindowTitle(QCoreApplication::translate("novaConsulta", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("novaConsulta", "CPF", nullptr));
        label_5->setText(QCoreApplication::translate("novaConsulta", "Data", nullptr));
        Horario->setText(QCoreApplication::translate("novaConsulta", "          Hor\303\241rio", nullptr));
        label_4->setText(QCoreApplication::translate("novaConsulta", "Especialidade", nullptr));
        btBuscar->setText(QCoreApplication::translate("novaConsulta", "Buscar", nullptr));
        label_2->setText(QCoreApplication::translate("novaConsulta", "M\303\251dico", nullptr));
        label_3->setText(QCoreApplication::translate("novaConsulta", "Procedimento", nullptr));
        btSalvar->setText(QCoreApplication::translate("novaConsulta", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class novaConsulta: public Ui_novaConsulta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOVACONSULTA_H
