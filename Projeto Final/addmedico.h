#ifndef ADDMEDICO_H
#define ADDMEDICO_H

#include <QDialog>

namespace Ui {
class addMedico;
}

class addMedico : public QDialog
{
    Q_OBJECT

public:
    explicit addMedico(QWidget *parent = nullptr);
    ~addMedico();

private slots:
    void on_btSalvar_clicked();

private:
    Ui::addMedico *ui;
};

#endif // ADDMEDICO_H
