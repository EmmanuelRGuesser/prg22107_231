#ifndef ADDATENDENTE_H
#define ADDATENDENTE_H

#include <QDialog>

namespace Ui {
class addAtendente;
}

class addAtendente : public QDialog
{
    Q_OBJECT

public:
    explicit addAtendente(QWidget *parent = nullptr);
    ~addAtendente();

private slots:
    void on_btSalvar_clicked();

private:
    Ui::addAtendente *ui;
};

#endif // ADDATENDENTE_H
