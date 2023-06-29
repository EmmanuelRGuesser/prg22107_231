/********************************************************************************
** Form generated from reading UI file 'addrelatorio.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRELATORIO_H
#define UI_ADDRELATORIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addRelatorio
{
public:
    QTextEdit *teRelatorio;
    QPushButton *btSalvar;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leCPF;
    QDateEdit *dateEdit;
    QPushButton *btBuscar;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QTextEdit *teProcedimento;

    void setupUi(QDialog *addRelatorio)
    {
        if (addRelatorio->objectName().isEmpty())
            addRelatorio->setObjectName("addRelatorio");
        addRelatorio->resize(816, 596);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addRelatorio->sizePolicy().hasHeightForWidth());
        addRelatorio->setSizePolicy(sizePolicy);
        teRelatorio = new QTextEdit(addRelatorio);
        teRelatorio->setObjectName("teRelatorio");
        teRelatorio->setGeometry(QRect(10, 140, 791, 441));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(teRelatorio->sizePolicy().hasHeightForWidth());
        teRelatorio->setSizePolicy(sizePolicy1);
        btSalvar = new QPushButton(addRelatorio);
        btSalvar->setObjectName("btSalvar");
        btSalvar->setGeometry(QRect(720, 13, 80, 31));
        QFont font;
        font.setPointSize(12);
        btSalvar->setFont(font);
        label_3 = new QLabel(addRelatorio);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 120, 71, 16));
        label_3->setFont(font);
        widget = new QWidget(addRelatorio);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 471, 101));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        leCPF = new QLineEdit(widget);
        leCPF->setObjectName("leCPF");
        leCPF->setFont(font);
        leCPF->setMaxLength(11);

        horizontalLayout->addWidget(leCPF);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setFont(font);

        horizontalLayout->addWidget(dateEdit);

        btBuscar = new QPushButton(widget);
        btBuscar->setObjectName("btBuscar");
        btBuscar->setFont(font);

        horizontalLayout->addWidget(btBuscar);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        teProcedimento = new QTextEdit(widget);
        teProcedimento->setObjectName("teProcedimento");

        horizontalLayout_3->addWidget(teProcedimento);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(addRelatorio);

        QMetaObject::connectSlotsByName(addRelatorio);
    } // setupUi

    void retranslateUi(QDialog *addRelatorio)
    {
        addRelatorio->setWindowTitle(QCoreApplication::translate("addRelatorio", "Dialog", nullptr));
        btSalvar->setText(QCoreApplication::translate("addRelatorio", "Salvar", nullptr));
        label_3->setText(QCoreApplication::translate("addRelatorio", "Relat\303\263rio", nullptr));
        label->setText(QCoreApplication::translate("addRelatorio", "CPF", nullptr));
        btBuscar->setText(QCoreApplication::translate("addRelatorio", "Buscar", nullptr));
        label_2->setText(QCoreApplication::translate("addRelatorio", "Procedimento", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addRelatorio: public Ui_addRelatorio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRELATORIO_H
