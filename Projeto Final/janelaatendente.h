#ifndef JANELAATENDENTE_H
#define JANELAATENDENTE_H

#include <QDialog>

namespace Ui {
class JanelaAtendente;
}

class JanelaAtendente : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaAtendente(QWidget *parent = nullptr);
    ~JanelaAtendente();

private slots:


    void on_btAddPaciente_clicked();

    void on_btModPaciente_clicked();

    void on_btAddConsulta_clicked();

    void on_pushButton_clicked();

private:
    Ui::JanelaAtendente *ui;
};

#endif // JANELAATENDENTE_H
