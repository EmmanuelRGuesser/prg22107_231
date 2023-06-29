#ifndef JANELAMEDICO_H
#define JANELAMEDICO_H

#include <QDialog>

namespace Ui {
class janelaMedico;
}

class janelaMedico : public QDialog
{
    Q_OBJECT

public:
    explicit janelaMedico(QWidget *parent = nullptr);
    ~janelaMedico();

private slots:
    //void on_pushButton_2_clicked();

    void on_btAddRelatorio_clicked();

    void on_btConsHistorico_clicked();

private:
    Ui::janelaMedico *ui;
};

#endif // JANELAMEDICO_H
