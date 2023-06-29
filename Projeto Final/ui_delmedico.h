/********************************************************************************
** Form generated from reading UI file 'delmedico.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELMEDICO_H
#define UI_DELMEDICO_H

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

class Ui_delMedico
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *leCPF;
    QPushButton *btBuscar;

    void setupUi(QDialog *delMedico)
    {
        if (delMedico->objectName().isEmpty())
            delMedico->setObjectName("delMedico");
        delMedico->resize(640, 121);
        layoutWidget = new QWidget(delMedico);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 571, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        leCPF = new QLineEdit(layoutWidget);
        leCPF->setObjectName("leCPF");
        leCPF->setFont(font);
        leCPF->setMaxLength(11);

        horizontalLayout_2->addWidget(leCPF);

        btBuscar = new QPushButton(layoutWidget);
        btBuscar->setObjectName("btBuscar");
        btBuscar->setFont(font);

        horizontalLayout_2->addWidget(btBuscar);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(delMedico);

        QMetaObject::connectSlotsByName(delMedico);
    } // setupUi

    void retranslateUi(QDialog *delMedico)
    {
        delMedico->setWindowTitle(QCoreApplication::translate("delMedico", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("delMedico", "CPF", nullptr));
        btBuscar->setText(QCoreApplication::translate("delMedico", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delMedico: public Ui_delMedico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELMEDICO_H
