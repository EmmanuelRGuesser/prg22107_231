/********************************************************************************
** Form generated from reading UI file 'logingerenciar.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINGERENCIAR_H
#define UI_LOGINGERENCIAR_H

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

class Ui_loginGerenciar
{
public:
    QLabel *LoginGerenCheck;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *LESenhaGeren;
    QPushButton *BTLoginGeren;

    void setupUi(QDialog *loginGerenciar)
    {
        if (loginGerenciar->objectName().isEmpty())
            loginGerenciar->setObjectName("loginGerenciar");
        loginGerenciar->resize(421, 130);
        LoginGerenCheck = new QLabel(loginGerenciar);
        LoginGerenCheck->setObjectName("LoginGerenCheck");
        LoginGerenCheck->setGeometry(QRect(30, 100, 49, 16));
        widget = new QWidget(loginGerenciar);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 17, 361, 71));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        LESenhaGeren = new QLineEdit(widget);
        LESenhaGeren->setObjectName("LESenhaGeren");
        LESenhaGeren->setFont(font);
        LESenhaGeren->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(LESenhaGeren);


        verticalLayout->addLayout(horizontalLayout);

        BTLoginGeren = new QPushButton(widget);
        BTLoginGeren->setObjectName("BTLoginGeren");
        BTLoginGeren->setFont(font);

        verticalLayout->addWidget(BTLoginGeren);


        retranslateUi(loginGerenciar);

        QMetaObject::connectSlotsByName(loginGerenciar);
    } // setupUi

    void retranslateUi(QDialog *loginGerenciar)
    {
        loginGerenciar->setWindowTitle(QCoreApplication::translate("loginGerenciar", "Dialog", nullptr));
        LoginGerenCheck->setText(QString());
        label->setText(QCoreApplication::translate("loginGerenciar", "Senha", nullptr));
        BTLoginGeren->setText(QCoreApplication::translate("loginGerenciar", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginGerenciar: public Ui_loginGerenciar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINGERENCIAR_H
