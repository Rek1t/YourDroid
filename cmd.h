#ifndef CMD_H
#define CMD_H

#include <QString>
#include <QPair>

class cmd {
//    QString _command;
//    QString _output;
//    int _res;
public:
//    cmd(QString command) : _command(command) {}
//    cmd() {}
    static QPair<int, QString> exec(QString);
//    QPair<int, QString> exec();
//    void setCommand(QString command) {_command = command;}
//    QString output() {return _output;}
//    int returnedValue() {return _res;}
};

#endif // CMD_H
