#ifndef BUSCACONSULTA_H
#define BUSCACONSULTA_H

#include <QDialog>

namespace Ui {
class buscaConsulta;
}

class buscaConsulta : public QDialog
{
    Q_OBJECT

public:
    explicit buscaConsulta(QWidget *parent = nullptr);
    ~buscaConsulta();

private slots:
    void on_btBuscar_clicked();

    void on_cbEspecialidade_currentTextChanged(const QString &arg1);

    void on_btSalvar_clicked();

private:
    Ui::buscaConsulta *ui;
};

#endif // BUSCACONSULTA_H
