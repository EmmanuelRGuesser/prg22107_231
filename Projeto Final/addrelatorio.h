#ifndef ADDRELATORIO_H
#define ADDRELATORIO_H

#include <QDialog>

namespace Ui {
class addRelatorio;
}

class addRelatorio : public QDialog
{
    Q_OBJECT

public:
    explicit addRelatorio(QWidget *parent = nullptr);
    ~addRelatorio();

private slots:
    void on_btBuscar_clicked();

    void on_btSalvar_clicked();

private:
    Ui::addRelatorio *ui;
};

#endif // ADDRELATORIO_H
