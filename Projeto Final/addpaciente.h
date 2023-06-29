#ifndef ADDPACIENTE_H
#define ADDPACIENTE_H

#include <QDialog>

namespace Ui {
class addPaciente;
}

class addPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit addPaciente(QWidget *parent = nullptr);
    ~addPaciente();

private slots:
    void on_btSalvar_clicked();

private:
    Ui::addPaciente *ui;
};

#endif // ADDPACIENTE_H
