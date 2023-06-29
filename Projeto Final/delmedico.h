#ifndef DELMEDICO_H
#define DELMEDICO_H

#include <QDialog>

namespace Ui {
class delMedico;
}

class delMedico : public QDialog
{
    Q_OBJECT

public:
    explicit delMedico(QWidget *parent = nullptr);
    ~delMedico();

private slots:
    void on_btBuscar_clicked();

private:
    Ui::delMedico *ui;
};

#endif // DELMEDICO_H
