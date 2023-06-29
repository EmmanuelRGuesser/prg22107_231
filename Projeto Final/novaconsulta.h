#ifndef NOVACONSULTA_H
#define NOVACONSULTA_H

#include <QDialog>

namespace Ui {
class novaConsulta;
}

class novaConsulta : public QDialog
{
    Q_OBJECT

public:
    explicit novaConsulta(QWidget *parent = nullptr);
    ~novaConsulta();

private slots:
    void on_btBuscar_clicked();

    void on_btSalvar_clicked();

    //void on_cbEspecialidade_currentTextChanged(const QString &arg1);

private:
    Ui::novaConsulta *ui;
};

#endif // NOVACONSULTA_H
