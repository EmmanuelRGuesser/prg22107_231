QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addatendente.cpp \
    addmedico.cpp \
    addpaciente.cpp \
    addrelatorio.cpp \
    buscaconsulta.cpp \
    dbmanager.cpp \
    delatendente.cpp \
    delmedico.cpp \
    gerenciar.cpp \
    janelaatendente.cpp \
    janelamedico.cpp \
    logingerenciar.cpp \
    main.cpp \
    janelalogin.cpp \
    modatendente.cpp \
    modmedico.cpp \
    modpaciente.cpp \
    novaconsulta.cpp

HEADERS += \
    addatendente.h \
    addmedico.h \
    addpaciente.h \
    addrelatorio.h \
    buscaconsulta.h \
    dbmanager.h \
    delatendente.h \
    delmedico.h \
    gerenciar.h \
    janelaatendente.h \
    janelalogin.h \
    janelamedico.h \
    logingerenciar.h \
    modatendente.h \
    modmedico.h \
    modpaciente.h \
    novaconsulta.h

FORMS += \
    addatendente.ui \
    addmedico.ui \
    addpaciente.ui \
    addrelatorio.ui \
    buscaconsulta.ui \
    delatendente.ui \
    delmedico.ui \
    gerenciar.ui \
    janelaatendente.ui \
    janelalogin.ui \
    janelamedico.ui \
    logingerenciar.ui \
    modatendente.ui \
    modmedico.ui \
    modpaciente.ui \
    novaconsulta.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
