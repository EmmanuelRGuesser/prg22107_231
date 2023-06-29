/********************************************************************************
** Form generated from reading UI file 'delatendente.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELATENDENTE_H
#define UI_DELATENDENTE_H

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

class Ui_delAtendente
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leCPF;
    QPushButton *btBuscar;

    void setupUi(QDialog *delAtendente)
    {
        if (delAtendente->objectName().isEmpty())
            delAtendente->setObjectName("delAtendente");
        delAtendente->resize(631, 120);
        layoutWidget = new QWidget(delAtendente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 571, 71));
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
        leCPF->setMaxLength(11);

        horizontalLayout->addWidget(leCPF);

        btBuscar = new QPushButton(layoutWidget);
        btBuscar->setObjectName("btBuscar");
        btBuscar->setFont(font);

        horizontalLayout->addWidget(btBuscar);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(delAtendente);

        QMetaObject::connectSlotsByName(delAtendente);
    } // setupUi

    void retranslateUi(QDialog *delAtendente)
    {
        delAtendente->setWindowTitle(QCoreApplication::translate("delAtendente", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("delAtendente", "CPF", nullptr));
        btBuscar->setText(QCoreApplication::translate("delAtendente", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delAtendente: public Ui_delAtendente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELATENDENTE_H
