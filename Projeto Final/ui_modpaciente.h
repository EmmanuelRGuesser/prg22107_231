/********************************************************************************
** Form generated from reading UI file 'modpaciente.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODPACIENTE_H
#define UI_MODPACIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modPaciente
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leCPF;
    QPushButton *btBuscar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *leNome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *leContato;
    QPushButton *btSalvar;

    void setupUi(QDialog *modPaciente)
    {
        if (modPaciente->objectName().isEmpty())
            modPaciente->setObjectName("modPaciente");
        modPaciente->resize(553, 236);
        layoutWidget = new QWidget(modPaciente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 491, 191));
        QFont font;
        font.setPointSize(12);
        layoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        leCPF = new QLineEdit(layoutWidget);
        leCPF->setObjectName("leCPF");
        leCPF->setFont(font);
        leCPF->setMaxLength(11);

        horizontalLayout->addWidget(leCPF);

        btBuscar = new QPushButton(layoutWidget);
        btBuscar->setObjectName("btBuscar");
        btBuscar->setFont(font);

        horizontalLayout->addWidget(btBuscar);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        leNome = new QLineEdit(layoutWidget);
        leNome->setObjectName("leNome");
        leNome->setFont(font);

        horizontalLayout_2->addWidget(leNome);


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

        btSalvar = new QPushButton(layoutWidget);
        btSalvar->setObjectName("btSalvar");
        btSalvar->setFont(font);

        verticalLayout->addWidget(btSalvar);


        retranslateUi(modPaciente);

        QMetaObject::connectSlotsByName(modPaciente);
    } // setupUi

    void retranslateUi(QDialog *modPaciente)
    {
        modPaciente->setWindowTitle(QCoreApplication::translate("modPaciente", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("modPaciente", "CPF", nullptr));
        btBuscar->setText(QCoreApplication::translate("modPaciente", "Buscar", nullptr));
        label_2->setText(QCoreApplication::translate("modPaciente", "Nome", nullptr));
        label_3->setText(QCoreApplication::translate("modPaciente", "Contato", nullptr));
        btSalvar->setText(QCoreApplication::translate("modPaciente", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modPaciente: public Ui_modPaciente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODPACIENTE_H
