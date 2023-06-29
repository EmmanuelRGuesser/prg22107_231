/********************************************************************************
** Form generated from reading UI file 'gerenciar.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERENCIAR_H
#define UI_GERENCIAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gerenciar
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPushButton *addMedico;
    QPushButton *modMedico;
    QPushButton *delMedico;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *addAtendente;
    QPushButton *modAtendente;
    QPushButton *delAtendente;

    void setupUi(QDialog *gerenciar)
    {
        if (gerenciar->objectName().isEmpty())
            gerenciar->setObjectName("gerenciar");
        gerenciar->resize(581, 339);
        layoutWidget = new QWidget(gerenciar);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(340, 80, 171, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        addMedico = new QPushButton(layoutWidget);
        addMedico->setObjectName("addMedico");
        addMedico->setFont(font);

        verticalLayout->addWidget(addMedico);

        modMedico = new QPushButton(layoutWidget);
        modMedico->setObjectName("modMedico");
        modMedico->setFont(font);

        verticalLayout->addWidget(modMedico);

        delMedico = new QPushButton(layoutWidget);
        delMedico->setObjectName("delMedico");
        delMedico->setFont(font);

        verticalLayout->addWidget(delMedico);

        layoutWidget1 = new QWidget(gerenciar);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(70, 80, 171, 141));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        addAtendente = new QPushButton(layoutWidget1);
        addAtendente->setObjectName("addAtendente");
        addAtendente->setFont(font);

        verticalLayout_2->addWidget(addAtendente);

        modAtendente = new QPushButton(layoutWidget1);
        modAtendente->setObjectName("modAtendente");
        modAtendente->setFont(font);

        verticalLayout_2->addWidget(modAtendente);

        delAtendente = new QPushButton(layoutWidget1);
        delAtendente->setObjectName("delAtendente");
        delAtendente->setFont(font);

        verticalLayout_2->addWidget(delAtendente);


        retranslateUi(gerenciar);

        QMetaObject::connectSlotsByName(gerenciar);
    } // setupUi

    void retranslateUi(QDialog *gerenciar)
    {
        gerenciar->setWindowTitle(QCoreApplication::translate("gerenciar", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("gerenciar", "M\303\251dico", nullptr));
        addMedico->setText(QCoreApplication::translate("gerenciar", "Adicionar", nullptr));
        modMedico->setText(QCoreApplication::translate("gerenciar", "Alterar", nullptr));
        delMedico->setText(QCoreApplication::translate("gerenciar", "Excluir", nullptr));
        label->setText(QCoreApplication::translate("gerenciar", "Atendente", nullptr));
        addAtendente->setText(QCoreApplication::translate("gerenciar", "Adicionar", nullptr));
        modAtendente->setText(QCoreApplication::translate("gerenciar", "Alterar", nullptr));
        delAtendente->setText(QCoreApplication::translate("gerenciar", "Excluir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gerenciar: public Ui_gerenciar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERENCIAR_H
