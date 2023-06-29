#ifndef MODATENDENTE_H
#define MODATENDENTE_H

#include <QDialog>

namespace Ui {
class modAtendente;
}

class modAtendente : public QDialog
{
    Q_OBJECT

public:
    explicit modAtendente(QWidget *parent = nullptr);
    ~modAtendente();

private slots:
    void on_btBuscar_clicked();

    void on_btSalvar_clicked();

private:
    Ui::modAtendente *ui;
};

#endif // MODATENDENTE_H
