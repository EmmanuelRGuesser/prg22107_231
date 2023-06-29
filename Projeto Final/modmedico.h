#ifndef MODMEDICO_H
#define MODMEDICO_H

#include <QDialog>

namespace Ui {
class modMedico;
}

class modMedico : public QDialog
{
    Q_OBJECT

public:
    explicit modMedico(QWidget *parent = nullptr);
    ~modMedico();

private slots:
    void on_btBuscar_clicked();

    void on_btSalvar_clicked();

private:
    Ui::modMedico *ui;
};

#endif // MODMEDICO_H
