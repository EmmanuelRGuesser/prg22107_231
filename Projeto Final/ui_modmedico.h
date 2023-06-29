/********************************************************************************
** Form generated from reading UI file 'modmedico.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODMEDICO_H
#define UI_MODMEDICO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modMedico
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *leCPF;
    QPushButton *btBuscar;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *leNome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *leContato;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *cbEspecialidade;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *leSenha;
    QPushButton *btSalvar;

    void setupUi(QDialog *modMedico)
    {
        if (modMedico->objectName().isEmpty())
            modMedico->setObjectName("modMedico");
        modMedico->resize(640, 262);
        layoutWidget = new QWidget(modMedico);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(29, 23, 581, 216));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout_4->addWidget(label);

        leCPF = new QLineEdit(layoutWidget);
        leCPF->setObjectName("leCPF");
        leCPF->setFont(font);
        leCPF->setMaxLength(11);

        horizontalLayout_4->addWidget(leCPF);

        btBuscar = new QPushButton(layoutWidget);
        btBuscar->setObjectName("btBuscar");
        btBuscar->setFont(font);

        horizontalLayout_4->addWidget(btBuscar);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        leNome = new QLineEdit(layoutWidget);
        leNome->setObjectName("leNome");
        leNome->setFont(font);

        horizontalLayout_3->addWidget(leNome);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        leContato = new QLineEdit(layoutWidget);
        leContato->setObjectName("leContato");
        leContato->setFont(font);

        horizontalLayout_2->addWidget(leContato);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        horizontalLayout->addWidget(label_5);

        cbEspecialidade = new QComboBox(layoutWidget);
        cbEspecialidade->setObjectName("cbEspecialidade");
        cbEspecialidade->setFont(font);

        horizontalLayout->addWidget(cbEspecialidade);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_5->addWidget(label_2);

        leSenha = new QLineEdit(layoutWidget);
        leSenha->setObjectName("leSenha");
        leSenha->setFont(font);

        horizontalLayout_5->addWidget(leSenha);


        verticalLayout->addLayout(horizontalLayout_5);

        btSalvar = new QPushButton(layoutWidget);
        btSalvar->setObjectName("btSalvar");
        btSalvar->setFont(font);

        verticalLayout->addWidget(btSalvar);


        retranslateUi(modMedico);

        QMetaObject::connectSlotsByName(modMedico);
    } // setupUi

    void retranslateUi(QDialog *modMedico)
    {
        modMedico->setWindowTitle(QCoreApplication::translate("modMedico", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("modMedico", "CPF       ", nullptr));
        btBuscar->setText(QCoreApplication::translate("modMedico", "Buscar", nullptr));
        label_3->setText(QCoreApplication::translate("modMedico", "Nome   ", nullptr));
        label_4->setText(QCoreApplication::translate("modMedico", "Contato", nullptr));
        leContato->setText(QString());
        label_5->setText(QCoreApplication::translate("modMedico", "Especialidade", nullptr));
        label_2->setText(QCoreApplication::translate("modMedico", "Senha   ", nullptr));
        btSalvar->setText(QCoreApplication::translate("modMedico", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modMedico: public Ui_modMedico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODMEDICO_H
