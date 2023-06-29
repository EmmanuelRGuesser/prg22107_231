#ifndef GERENCIAR_H
#define GERENCIAR_H

#include <QDialog>

namespace Ui {
class gerenciar;
}

class gerenciar : public QDialog
{
    Q_OBJECT

public:
    explicit gerenciar(QWidget *parent = nullptr);
    ~gerenciar();

private slots:
    void on_addAtendente_clicked();

    void on_delAtendente_clicked();

    void on_modAtendente_clicked();

    void on_addMedico_clicked();

    void on_delMedico_clicked();

    void on_modMedico_clicked();

private:
    Ui::gerenciar *ui;
};

#endif // GERENCIAR_H
