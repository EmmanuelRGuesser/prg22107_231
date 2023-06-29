/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaLogin
{
public:
    QWidget *centralwidget;
    QPushButton *Gerenciar;
    QLabel *DBCheck;
    QLabel *MsgLogin;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *LabelCPF;
    QLineEdit *LeCPF;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LbSenha;
    QLineEdit *LeSenha;
    QPushButton *BtLogin;

    void setupUi(QMainWindow *JanelaLogin)
    {
        if (JanelaLogin->objectName().isEmpty())
            JanelaLogin->setObjectName("JanelaLogin");
        JanelaLogin->resize(800, 600);
        centralwidget = new QWidget(JanelaLogin);
        centralwidget->setObjectName("centralwidget");
        Gerenciar = new QPushButton(centralwidget);
        Gerenciar->setObjectName("Gerenciar");
        Gerenciar->setGeometry(QRect(660, 510, 80, 24));
        QFont font;
        font.setPointSize(12);
        Gerenciar->setFont(font);
        DBCheck = new QLabel(centralwidget);
        DBCheck->setObjectName("DBCheck");
        DBCheck->setGeometry(QRect(70, 510, 49, 16));
        MsgLogin = new QLabel(centralwidget);
        MsgLogin->setObjectName("MsgLogin");
        MsgLogin->setGeometry(QRect(60, 270, 341, 21));
        MsgLogin->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 50, 681, 211));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        LabelCPF = new QLabel(layoutWidget);
        LabelCPF->setObjectName("LabelCPF");
        LabelCPF->setFont(font);

        horizontalLayout->addWidget(LabelCPF);

        LeCPF = new QLineEdit(layoutWidget);
        LeCPF->setObjectName("LeCPF");
        LeCPF->setFont(font);
        LeCPF->setMaxLength(11);

        horizontalLayout->addWidget(LeCPF);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        LbSenha = new QLabel(layoutWidget);
        LbSenha->setObjectName("LbSenha");
        LbSenha->setFont(font);

        horizontalLayout_2->addWidget(LbSenha);

        LeSenha = new QLineEdit(layoutWidget);
        LeSenha->setObjectName("LeSenha");
        LeSenha->setFont(font);
        LeSenha->setMaxLength(10);
        LeSenha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(LeSenha);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        BtLogin = new QPushButton(layoutWidget);
        BtLogin->setObjectName("BtLogin");
        BtLogin->setFont(font);

        verticalLayout_2->addWidget(BtLogin);

        JanelaLogin->setCentralWidget(centralwidget);

        retranslateUi(JanelaLogin);

        QMetaObject::connectSlotsByName(JanelaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaLogin)
    {
        JanelaLogin->setWindowTitle(QCoreApplication::translate("JanelaLogin", "JanelaLogin", nullptr));
        Gerenciar->setText(QCoreApplication::translate("JanelaLogin", "Gerenciar", nullptr));
        DBCheck->setText(QString());
        MsgLogin->setText(QString());
        LabelCPF->setText(QCoreApplication::translate("JanelaLogin", "CPF", nullptr));
        LbSenha->setText(QCoreApplication::translate("JanelaLogin", "SENHA", nullptr));
        BtLogin->setText(QCoreApplication::translate("JanelaLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
