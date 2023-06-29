/********************************************************************************
** Form generated from reading UI file 'janelamedico.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAMEDICO_H
#define UI_JANELAMEDICO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_janelaMedico
{
public:
    QLabel *laMedico;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btConsHistorico;
    QPushButton *btAddRelatorio;

    void setupUi(QDialog *janelaMedico)
    {
        if (janelaMedico->objectName().isEmpty())
            janelaMedico->setObjectName("janelaMedico");
        janelaMedico->resize(569, 266);
        laMedico = new QLabel(janelaMedico);
        laMedico->setObjectName("laMedico");
        laMedico->setGeometry(QRect(30, 20, 191, 16));
        QFont font;
        font.setPointSize(12);
        laMedico->setFont(font);
        layoutWidget = new QWidget(janelaMedico);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 80, 143, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btConsHistorico = new QPushButton(layoutWidget);
        btConsHistorico->setObjectName("btConsHistorico");
        btConsHistorico->setFont(font);

        verticalLayout->addWidget(btConsHistorico);

        btAddRelatorio = new QPushButton(layoutWidget);
        btAddRelatorio->setObjectName("btAddRelatorio");
        btAddRelatorio->setFont(font);

        verticalLayout->addWidget(btAddRelatorio);


        retranslateUi(janelaMedico);

        QMetaObject::connectSlotsByName(janelaMedico);
    } // setupUi

    void retranslateUi(QDialog *janelaMedico)
    {
        janelaMedico->setWindowTitle(QCoreApplication::translate("janelaMedico", "Dialog", nullptr));
        laMedico->setText(QCoreApplication::translate("janelaMedico", "Medico", nullptr));
        btConsHistorico->setText(QCoreApplication::translate("janelaMedico", "Consultar Hist\303\263rico", nullptr));
        btAddRelatorio->setText(QCoreApplication::translate("janelaMedico", "Adicionar Relat\303\263rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janelaMedico: public Ui_janelaMedico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAMEDICO_H
