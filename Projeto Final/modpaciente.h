#ifndef MODPACIENTE_H
#define MODPACIENTE_H

#include <QDialog>

namespace Ui {
class modPaciente;
}

class modPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit modPaciente(QWidget *parent = nullptr);
    ~modPaciente();

private slots:
    void on_btBuscar_clicked();

    void on_btSalvar_clicked();

private:
    Ui::modPaciente *ui;
};

#endif // MODPACIENTE_H
