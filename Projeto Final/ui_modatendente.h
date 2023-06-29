/********************************************************************************
** Form generated from reading UI file 'modatendente.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODATENDENTE_H
#define UI_MODATENDENTE_H

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

class Ui_modAtendente
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leCPF;
    QPushButton *btBuscar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *leNome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *leContato;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *leSenha;
    QPushButton *btSalvar;

    void setupUi(QDialog *modAtendente)
    {
        if (modAtendente->objectName().isEmpty())
            modAtendente->setObjectName("modAtendente");
        modAtendente->resize(640, 280);
        layoutWidget = new QWidget(modAtendente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 23, 581, 231));
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

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        leNome = new QLineEdit(layoutWidget);
        leNome->setObjectName("leNome");
        leNome->setFont(font);

        horizontalLayout_2->addWidget(leNome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        leContato = new QLineEdit(layoutWidget);
        leContato->setObjectName("leContato");
        leContato->setFont(font);

        horizontalLayout_3->addWidget(leContato);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_4->addWidget(label_2);

        leSenha = new QLineEdit(layoutWidget);
        leSenha->setObjectName("leSenha");
        leSenha->setFont(font);

        horizontalLayout_4->addWidget(leSenha);


        verticalLayout->addLayout(horizontalLayout_4);

        btSalvar = new QPushButton(layoutWidget);
        btSalvar->setObjectName("btSalvar");
        btSalvar->setFont(font);

        verticalLayout->addWidget(btSalvar);


        retranslateUi(modAtendente);

        QMetaObject::connectSlotsByName(modAtendente);
    } // setupUi

    void retranslateUi(QDialog *modAtendente)
    {
        modAtendente->setWindowTitle(QCoreApplication::translate("modAtendente", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("modAtendente", "CPF       ", nullptr));
        btBuscar->setText(QCoreApplication::translate("modAtendente", "Buscar", nullptr));
        label_3->setText(QCoreApplication::translate("modAtendente", "Nome   ", nullptr));
        label_4->setText(QCoreApplication::translate("modAtendente", "Contato", nullptr));
        leContato->setText(QString());
        label_2->setText(QCoreApplication::translate("modAtendente", "Senha   ", nullptr));
        btSalvar->setText(QCoreApplication::translate("modAtendente", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modAtendente: public Ui_modAtendente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODATENDENTE_H
