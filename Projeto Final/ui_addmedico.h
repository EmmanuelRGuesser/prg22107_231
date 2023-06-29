/********************************************************************************
** Form generated from reading UI file 'addmedico.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEDICO_H
#define UI_ADDMEDICO_H

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

class Ui_addMedico
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leNome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *leCPF;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *leContato;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *cbEspecialidade;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *leSenha;
    QPushButton *btSalvar;

    void setupUi(QDialog *addMedico)
    {
        if (addMedico->objectName().isEmpty())
            addMedico->setObjectName("addMedico");
        addMedico->resize(640, 324);
        layoutWidget = new QWidget(addMedico);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(21, 17, 591, 291));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        leNome = new QLineEdit(layoutWidget);
        leNome->setObjectName("leNome");
        leNome->setFont(font);

        horizontalLayout->addWidget(leNome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        leCPF = new QLineEdit(layoutWidget);
        leCPF->setObjectName("leCPF");
        leCPF->setFont(font);
        leCPF->setMaxLength(11);

        horizontalLayout_2->addWidget(leCPF);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        leContato = new QLineEdit(layoutWidget);
        leContato->setObjectName("leContato");
        leContato->setFont(font);

        horizontalLayout_3->addWidget(leContato);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        cbEspecialidade = new QComboBox(layoutWidget);
        cbEspecialidade->setObjectName("cbEspecialidade");
        cbEspecialidade->setFont(font);

        horizontalLayout_4->addWidget(cbEspecialidade);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        leSenha = new QLineEdit(layoutWidget);
        leSenha->setObjectName("leSenha");
        leSenha->setFont(font);

        horizontalLayout_5->addWidget(leSenha);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        btSalvar = new QPushButton(layoutWidget);
        btSalvar->setObjectName("btSalvar");
        btSalvar->setFont(font);

        verticalLayout_2->addWidget(btSalvar);


        retranslateUi(addMedico);

        QMetaObject::connectSlotsByName(addMedico);
    } // setupUi

    void retranslateUi(QDialog *addMedico)
    {
        addMedico->setWindowTitle(QCoreApplication::translate("addMedico", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addMedico", "Nome   ", nullptr));
        label_2->setText(QCoreApplication::translate("addMedico", "CPF       ", nullptr));
        label_3->setText(QCoreApplication::translate("addMedico", "Contato", nullptr));
        label_4->setText(QCoreApplication::translate("addMedico", "Especialidade", nullptr));
        label_5->setText(QCoreApplication::translate("addMedico", "Senha   ", nullptr));
        btSalvar->setText(QCoreApplication::translate("addMedico", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMedico: public Ui_addMedico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEDICO_H
