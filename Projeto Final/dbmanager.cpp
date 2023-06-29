#include <dbmanager.h>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>

DbAtendente * DbAtendente::_instance = 0;
DbMedico * DbMedico::_instance = 0;
DbPaciente * DbPaciente::_instance = 0;
DbConsulta * DbConsulta::_instance = 0;

void initDb(const QString &path)
{
    QSqlDatabase _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName(path);

    if (!_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}


QString DbAtendente::getAtendenteAtual()
{
    return atendenteAtual;
}

bool DbAtendente::createTable()
{
    bool success = false;

    QSqlQuery query;
    query.prepare("CREATE TABLE atendente(nome TEXT, cpf TEXT,contato Text, senha TEXT);");

    if (!query.exec())
    {
        qDebug() << "Couldn't create the table 'atendente': one might already exist.";
        success = false;
    }
    return success;
}

bool DbAtendente::addAtendente(const QString& nome, const QString& cpf, const QString& contato, const QString& senha)
{
    bool success = false;

    if (!AtendenteExists(cpf))
    {
        QSqlQuery queryAdd;
        queryAdd.prepare("INSERT INTO atendente (nome,cpf,contato, senha) VALUES (:nome,:cpf, :contato, :senha)");
        queryAdd.bindValue(":nome", nome);
        queryAdd.bindValue(":cpf", cpf);
        queryAdd.bindValue(":contato", contato);
        queryAdd.bindValue(":senha", senha);

        if(queryAdd.exec())
        {
            success = true;
        }
        else
        {
            qDebug() << "add atendente failed: " << queryAdd.lastError();
        }
    }
    else
    {
        qDebug() << "add atendente failed: cpf used";
        return success;
    }

    return success;
}

bool DbAtendente::removeAtendente(const QString& cpf)
{
    bool success = false;

    if (AtendenteExists(cpf))
    {
        QSqlQuery queryDelete;
        queryDelete.prepare("DELETE FROM atendente WHERE cpf = (:cpf)");
        queryDelete.bindValue(":cpf", cpf);
        success = queryDelete.exec();

        if(!success)
        {
            qDebug() << "remove atendente failed: " << queryDelete.lastError();
        }
    }
    else
    {
        qDebug() << "remove atendente failed: atendente doesnt exist";
    }

    return success;
}

QVariantMap DbAtendente::atendenteData(const QString& cpf)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM atendente WHERE cpf = :cpf");
    query.bindValue(":cpf", cpf);
    query.exec();

    if (query.next()) {
        QVariantMap atendenteData;
        atendenteData["nome"] = query.value("nome").toString();
        atendenteData["contato"] = query.value("contato").toString();
        atendenteData["senha"] = query.value("senha").toString();
        return atendenteData;
    }

    return QVariantMap();
}

bool DbAtendente::AtendenteExists(const QString& cpf)
{
    bool exists = false;

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT cpf FROM atendente WHERE cpf = (:cpf)");
    checkQuery.bindValue(":cpf", cpf);

    if (checkQuery.exec())
    {
        if (checkQuery.next())
        {
            exists = true;
        }
    }
    else
    {
        qDebug() << "person exists failed: " << checkQuery.lastError();
    }

    return exists;
}

bool DbAtendente::LoginAtendente(const QString& cpf, const QString& senha)
{
    bool login = false;

    QSqlQuery query;
    query.prepare("SELECT * FROM atendente WHERE cpf = (:cpf) AND senha = (:senha)");
    query.bindValue(":cpf", cpf);
    query.bindValue(":senha", senha);

    if (query.exec())
    {
        if (query.next())
        {
            login = true;
            query.prepare("SELECT * FROM atendente WHERE cpf = (:cpf)");
            query.bindValue(":cpf", cpf);
            query.exec();

            if(query.next())
            {
                atendenteAtual = query.value("nome").toString();
            }

            qDebug() << "login efetuado nome=";
            qDebug() << atendenteAtual;
        }else{
            qDebug() << "login não efetuado ";
        }
    }
    else
    {
        qDebug() << "login error: " << query.lastError();
    }

    return login;
}

bool DbAtendente::modAtendente(const QString& cpf, const QString& nome, const QString& contato, const QString& senha) {

    bool success = false;

    if(AtendenteExists(cpf)){
        QSqlQuery query;
        query.prepare("UPDATE atendente SET nome = :nome,contato = :contato, senha = :senha WHERE cpf = :cpf");
        query.bindValue(":nome", nome);
        query.bindValue(":contato", contato);
        query.bindValue(":senha", senha);
        query.bindValue(":cpf", cpf);

        if(query.exec()){
            success = true;
            qDebug() << "Alterado";
        }else{
            qDebug() << "Erro";
            return success;
        }
    }
    return success;
}

DbAtendente * DbAtendente::getInstance() {
    if(_instance == 0)
        _instance = new DbAtendente();

    return _instance;
}

/////////////////////////////////////////

QString DbMedico::getMedicoAtual()
{
    return medicoAtual;
}

bool DbMedico::createTable()
{
    bool success = false;

    QSqlQuery query;
    query.prepare("CREATE TABLE medico(nome TEXT, cpf TEXT, contato TEXT, especialidade TEXT, senha TEXT);");

    if (!query.exec())
    {
        qDebug() << "Couldn't create the table 'medico': one might already exist.";
        success = false;
    }
    return success;
}

bool DbMedico::addMedico(const QString& nome, const QString& cpf, const QString& contato, const QString& especialidade, const QString& senha)
{
    bool success = false;

    if (!MedicoExists(cpf))
    {
        QSqlQuery queryAdd;
        queryAdd.prepare("INSERT INTO medico (nome,cpf, contato, senha, especialidade) VALUES (:nome,:cpf,:contato,:senha,:especialidade)");
        queryAdd.bindValue(":nome", nome);
        queryAdd.bindValue(":cpf", cpf);
        queryAdd.bindValue(":contato", contato);
        queryAdd.bindValue(":senha", senha);
        queryAdd.bindValue(":especialidade", especialidade);

        if(queryAdd.exec())
        {
            success = true;
        }
        else
        {
            qDebug() << "add medico failed: " << queryAdd.lastError();
        }
    }
    else
    {
        qDebug() << "add medico failed: cpf used";
        return success;
    }

    return success;
}

bool DbMedico::removeMedico(const QString& cpf)
{
    bool success = false;

    if (MedicoExists(cpf))
    {
        QSqlQuery queryDelete;
        queryDelete.prepare("DELETE FROM medico WHERE cpf = (:cpf)");
        queryDelete.bindValue(":cpf", cpf);
        success = queryDelete.exec();

        if(!success)
        {
            qDebug() << "remove medico failed: " << queryDelete.lastError();
        }
    }
    else
    {
        qDebug() << "remove medico failed: atendente doesnt exist";
    }

    return success;
}

QVariantMap DbMedico::medicoData(const QString& cpf)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM medico WHERE cpf = :cpf");
    query.bindValue(":cpf", cpf);
    query.exec();

    if (query.next()) {
        QVariantMap medicoData;
        medicoData["nome"] = query.value("nome").toString();
        medicoData["contato"] = query.value("contato").toString();
        medicoData["senha"] = query.value("senha").toString();
        medicoData["especialidade"] = query.value("especialidade").toString();
        return medicoData;
    }
    return QVariantMap();
}

QStringList DbMedico::medEspecialidade(const QString& especialidade)
{
    QStringList medicos;

    QSqlQuery query;
    query.prepare("SELECT * FROM medico WHERE especialidade = :especialidade");
    query.bindValue(":especialidade", especialidade);

    if(!query.exec()){
        qDebug() << "Erro ao executar a consulta:" << query.lastError().text();
        return medicos;
    }

    while (query.next()) {
        QString nome = query.value("nome").toString();
        medicos.append(nome);
    }

    return medicos;
}

bool DbMedico::MedicoExists(const QString& cpf)
{
    bool exists = false;

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT cpf FROM medico WHERE cpf = (:cpf)");
    checkQuery.bindValue(":cpf", cpf);

    if (checkQuery.exec())
    {
        if (checkQuery.next())
        {
            exists = true;
        }
    }
    else
    {
        qDebug() << "medico exists failed: " << checkQuery.lastError();
    }

    return exists;
}

bool DbMedico::LoginMedico(const QString& cpf, const QString& senha)
{
    bool login = false;

    QSqlQuery query;
    query.prepare("SELECT * FROM medico WHERE cpf = (:cpf) AND senha = (:senha)");
    query.bindValue(":cpf", cpf);
    query.bindValue(":senha", senha);

    if (query.exec())
    {
        if (query.next())
        {
            login = true;

            query.prepare("SELECT * FROM medico WHERE cpf = (:cpf)");
            query.bindValue(":cpf", cpf);
            query.exec();

            if(query.next())
            {
                medicoAtual = query.value("nome").toString();
            }

            qDebug() << "login efetuado nome=";
            qDebug() << medicoAtual;

        }else{
            qDebug() << "login não efetuado ";
        }
    }
    else
    {
        qDebug() << "login error: " << query.lastError();
    }

    return login;
}

bool DbMedico::modMedico(const QString& cpf, const QString& nome, const QString& contato, const QString& senha, const QString& especialidade) {

    bool success = false;

    if(MedicoExists(cpf)){
        QSqlQuery query;
        query.prepare("UPDATE medico SET nome = :nome,contato = :contato, senha = :senha, especialidade = :especialidade WHERE cpf = :cpf");
        query.bindValue(":nome", nome);
        query.bindValue(":contato", contato);
        query.bindValue(":senha", senha);
        query.bindValue(":cpf", cpf);
        query.bindValue(":especialidade", especialidade);

        if(query.exec()){
            success = true;
            qDebug() << "Alterado";
        }else{
            qDebug() << "Erro";
            return success;
        }
    }
    return success;
}

DbMedico * DbMedico::getInstance() {
    if(_instance == 0)
        _instance = new DbMedico();

    return _instance;
}

////////////////////////////////////////////////

bool DbPaciente::createTable()
{
    bool success = false;

    QSqlQuery query;
    query.prepare("CREATE TABLE paciente(nome TEXT, cpf TEXT, contato TEXT);");

    if (!query.exec())
    {
        qDebug() << "Couldn't create the table 'paciente': one might already exist.";
        success = false;
    }
    return success;
}

bool DbPaciente::addPaciente(const QString& nome, const QString& cpf, const QString& contato)
{
    bool success = false;

    if (!PacienteExists(cpf))
    {
        QSqlQuery queryAdd;
        queryAdd.prepare("INSERT INTO paciente (nome,cpf,contato) VALUES (:nome,:cpf,:contato)");
        queryAdd.bindValue(":nome", nome);
        queryAdd.bindValue(":cpf", cpf);
        queryAdd.bindValue(":contato", contato);
        if(queryAdd.exec())
        {
            success = true;
        }
        else
        {
            qDebug() << "add paciente failed: " << queryAdd.lastError();
        }
    }
    else
    {
        qDebug() << "add paciente failed: cpf used";
        return success;
    }

    return success;
}

bool DbPaciente::removePaciente(const QString& cpf)
{
    bool success = false;

    if (PacienteExists(cpf))
    {
        QSqlQuery queryDelete;
        queryDelete.prepare("DELETE FROM paciente WHERE cpf = (:cpf)");
        queryDelete.bindValue(":cpf", cpf);
        success = queryDelete.exec();

        if(!success)
        {
            qDebug() << "remove paciente failed: " << queryDelete.lastError();
        }
    }
    else
    {
        qDebug() << "remove paciente failed: paciente doesnt exist";
    }

    return success;
}

bool DbPaciente::PacienteExists(const QString& cpf) const
{
    bool exists = false;

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT cpf FROM paciente WHERE cpf = (:cpf)");
    checkQuery.bindValue(":cpf", cpf);

    if (checkQuery.exec())
    {
        if (checkQuery.next())
        {
            exists = true;
        }
    }
    else
    {
        qDebug() << "paciente exists failed: " << checkQuery.lastError();
    }

    return exists;
}

bool DbPaciente::modPaciente(const QString& cpf, const QString& nome, const QString& contato) {

    bool success = false;

    if(PacienteExists(cpf)){
        QSqlQuery query;
        query.prepare("UPDATE paciente SET nome = :nome,contato = :contato WHERE cpf = :cpf");
        query.bindValue(":nome", nome);
        query.bindValue(":contato", contato);
        query.bindValue(":cpf", cpf);

        if(query.exec()){
            success = true;
            qDebug() << "Alterado";
        }else{
            qDebug() << "Erro";
            return success;
        }
    }
    return success;
}

QVariantMap DbPaciente::pacienteData(const QString& cpf)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM paciente WHERE cpf = :cpf");
    query.bindValue(":cpf", cpf);
    query.exec();

    if (query.next()) {
        QVariantMap pacienteData;
        pacienteData["nome"] = query.value("nome").toString();
        pacienteData["contato"] = query.value("contato").toString();
        return pacienteData;
    }
    return QVariantMap();
}

DbPaciente * DbPaciente::getInstance() {
    if(_instance == 0)
        _instance = new DbPaciente();

    return _instance;
}

/////////////////////////////////////////////////////////////////////

bool DbConsulta::createTable()
{
    bool success = false;

    QSqlQuery query;
    query.prepare("CREATE TABLE consulta(cpf TEXT, data TEXT, horario TEXT, medico TEXT, procedimento TEXT, relatorio TEXT );");

    if (!query.exec())
    {
        qDebug() << "Couldn't create the table 'consulta': one might already exist.";
        success = false;
    }
    return success;
}

bool DbConsulta::novaConsulta(const QString& cpf, const QString& data, const QString& horario, const QString& medico, const QString& procedimento)
{
    bool success = false;

    if (1)  // adicionar verificação de disponibilidade do medico
    {
        QSqlQuery queryAdd;
        queryAdd.prepare("INSERT INTO consulta (cpf, data, horario, medico, procedimento) VALUES (:cpf, :data, :horario, :medico, :procedimento)");
        queryAdd.bindValue(":cpf", cpf);
        queryAdd.bindValue(":data", data);
        queryAdd.bindValue(":horario", horario);
        queryAdd.bindValue(":medico", medico);
        queryAdd.bindValue(":procedimento", procedimento);
        if(queryAdd.exec())
        {
            success = true;
        }
        else
        {
            qDebug() << "nova consulta failed: " << queryAdd.lastError();
        }
    }
    else
    {
        qDebug() << "nova consulta failed.";
        return success;
    }

    return success;
}


bool DbConsulta::ConsultaExists(const QString& cpf, const QString& data, const QString& medico) const
{
    bool exists = false;

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT * FROM consulta WHERE cpf = (:cpf) AND data = (:data) AND medico = (:medico)");
    checkQuery.bindValue(":cpf", cpf);
    checkQuery.bindValue(":data", data);
    checkQuery.bindValue(":medico", medico);

    if (checkQuery.exec())
    {
        if (checkQuery.next())
        {
            exists = true;
        }
    }
    else
    {
        qDebug() << "consulta exists failed: " << checkQuery.lastError();
    }

    return exists;
}

bool DbConsulta::addRelatorio(const QString& cpf, const QString& data, const QString& medico, const QString& relatorio)
{
    bool success = false;

    if(ConsultaExists(cpf,data,medico)){
        QSqlQuery query;
        query.prepare("UPDATE consulta SET relatorio = :relatorio WHERE cpf = :cpf AND data = :data AND medico = :medico");
        query.bindValue(":relatorio", relatorio);
        query.bindValue(":cpf", cpf);
        query.bindValue(":data", data);
        query.bindValue(":medico", medico);

        if(query.exec()){
            success = true;
            qDebug() << "Alterado";
        }else{
            qDebug() << "Erro";
            return success;
        }
    }
    return success;
}


bool DbConsulta::modConsulta(const QString& cpf, const QString& dataAnt, const QString& dataNova, const QString& horario,
                             const QString& medicoAnt, const QString& medicoNovo, const QString& procedimento)
{
    bool success = false;

    if (ConsultaExists(cpf, dataAnt, medicoAnt)) {
        QSqlQuery query;
        query.prepare("UPDATE consulta SET data=?, horario=?, medico=?, procedimento=? WHERE cpf=? AND data=? AND medico=?");

        query.bindValue(0, dataNova);
        query.bindValue(1, horario);
        query.bindValue(2, medicoNovo);
        query.bindValue(3, procedimento);
        query.bindValue(4, cpf);
        query.bindValue(5, dataAnt);
        query.bindValue(6, medicoAnt);

        if (query.exec()) {
            success = true;
            qDebug() << "Alterado";
        } else {
            qDebug() << "Erro" << query.lastError();
            return success;
        }
    }
    return success;
}


QVariantMap DbConsulta::consultaData(const QString& cpf, const QString& data, const QString& medico)
{

    QSqlQuery query;
    query.prepare("SELECT * FROM consulta WHERE cpf=:cpf AND data=:data AND medico=:medico");
    query.bindValue(":cpf", cpf);
    query.bindValue(":data", data);
    query.bindValue(":medico", medico);
    query.exec();

    if (query.next()) {
        QVariantMap consulta;
        consulta["horario"] = query.value("horario").toString();
        consulta["relatorio"] = query.value("relatorio").toString();
        consulta["procedimento"] = query.value("procedimento").toString();
        return consulta;
    }
    return QVariantMap();
}

DbConsulta * DbConsulta::getInstance() {
    if(_instance == 0)
        _instance = new DbConsulta();

    return _instance;
}
