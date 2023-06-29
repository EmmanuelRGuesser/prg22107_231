#ifndef DELATENDENTE_H
#define DELATENDENTE_H

#include <QDialog>

namespace Ui {
class delAtendente;
}

class delAtendente : public QDialog
{
    Q_OBJECT

public:
    explicit delAtendente(QWidget *parent = nullptr);
    ~delAtendente();

private slots:
    void on_btBuscar_clicked();

private:
    Ui::delAtendente *ui;
};

#endif // DELATENDENTE_H
