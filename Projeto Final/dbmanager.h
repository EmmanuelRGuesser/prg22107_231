#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QDebug>

void initDb(const QString &path);

class DbAtendente
{
private:
    DbAtendente() {}

    QString atendenteAtual;

public:
    QString getAtendenteAtual();

    bool createTable();

    bool addAtendente(const QString& nome, const QString& cpf, const QString& contato, const QString& senha);

    bool removeAtendente(const QString& cpf);

    bool AtendenteExists(const QString& cpf);

    bool LoginAtendente(const QString& cpf, const QString& senha);

    QVariantMap atendenteData(const QString& cpf);

    bool modAtendente(const QString& cpf, const QString& nome, const QString& contato, const QString& senha);

    static DbAtendente * getInstance();

private:
    static DbAtendente *_instance;
};

class DbMedico
{
private:
    DbMedico() {}

    QString medicoAtual;

public:

    QString getMedicoAtual();

    bool createTable();

    bool addMedico(const QString& nome, const QString& cpf, const QString& contato, const QString& especialidade, const QString& senha);

    bool removeMedico(const QString& cpf);

    bool MedicoExists(const QString& cpf);

    QVariantMap medicoData(const QString& cpf);

    bool LoginMedico(const QString& cpf, const QString& senha);

    bool modMedico(const QString& cpf, const QString& nome, const QString& contato, const QString& senha, const QString& especialidade);

    QStringList medEspecialidade(const QString& especialidade);

    static DbMedico * getInstance();

private:
    static DbMedico *_instance;
};

class DbPaciente
{
private:
    DbPaciente() {}

public:

    bool createTable();

    bool addPaciente(const QString& nome, const QString& cpf, const QString& contato);

    bool removePaciente(const QString& cpf);

    bool PacienteExists(const QString& cpf) const;

    bool modPaciente(const QString& cpf, const QString& nome, const QString& contato);

    QVariantMap pacienteData(const QString& cpf);

    static DbPaciente * getInstance();

private:
    static DbPaciente *_instance;
};


class DbConsulta
{
private:
    DbConsulta() {}

public:

    bool createTable();

    bool novaConsulta(const QString& cpf, const QString& data, const QString& horario, const QString& medico, const QString& procedimento);

    bool ConsultaExists(const QString& cpf, const QString& data, const QString& medico) const;

    bool addRelatorio(const QString& cpf, const QString& data, const QString& medico, const QString& relatorio);

    QVariantMap consultaData(const QString& cpf, const QString& data, const QString& medico);

    bool modConsulta(const QString& cpf, const QString& dataAnt, const QString& dataNova, const QString& horario,
                     const QString& medicoAnt, const QString& medicoNovo, const QString& procedimento);

    static DbConsulta * getInstance();

private:
    static DbConsulta *_instance;
};

#endif // DBMANAGER_H
