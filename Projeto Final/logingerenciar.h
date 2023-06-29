#ifndef LOGINGERENCIAR_H
#define LOGINGERENCIAR_H

#include <QDialog>

namespace Ui {
class loginGerenciar;
}

class loginGerenciar : public QDialog
{
    Q_OBJECT

public:
    explicit loginGerenciar(QWidget *parent = nullptr);
    ~loginGerenciar();

private slots:
    void on_BTLoginGeren_clicked();

private:
    Ui::loginGerenciar *ui;
};

#endif // LOGINGERENCIAR_H
