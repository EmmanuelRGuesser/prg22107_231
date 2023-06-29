/********************************************************************************
** Form generated from reading UI file 'addpaciente.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPACIENTE_H
#define UI_ADDPACIENTE_H

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

class Ui_addPaciente
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
    QPushButton *btSalvar;

    void setupUi(QDialog *addPaciente)
    {
        if (addPaciente->objectName().isEmpty())
            addPaciente->setObjectName("addPaciente");
        addPaciente->resize(613, 271);
        layoutWidget = new QWidget(addPaciente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 30, 501, 201));
        QFont font;
        font.setPointSize(12);
        layoutWidget->setFont(font);
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
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


        verticalLayout_2->addLayout(verticalLayout);

        btSalvar = new QPushButton(layoutWidget);
        btSalvar->setObjectName("btSalvar");
        btSalvar->setFont(font);

        verticalLayout_2->addWidget(btSalvar);


        retranslateUi(addPaciente);

        QMetaObject::connectSlotsByName(addPaciente);
    } // setupUi

    void retranslateUi(QDialog *addPaciente)
    {
        addPaciente->setWindowTitle(QCoreApplication::translate("addPaciente", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addPaciente", "Nome   ", nullptr));
        label_2->setText(QCoreApplication::translate("addPaciente", "CPF       ", nullptr));
        label_3->setText(QCoreApplication::translate("addPaciente", "Contato", nullptr));
        btSalvar->setText(QCoreApplication::translate("addPaciente", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addPaciente: public Ui_addPaciente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPACIENTE_H
