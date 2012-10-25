#ifndef LOGIN_SERVER_H
#define LOGIN_SERVER_H

#include <QObject>
#include "tcp_receiver.h"

class login_server : public QObject
{
    Q_OBJECT
public:
    explicit login_server(QObject *parent = 0);
    ~login_server();
    void start();
private:
    tcp_receiver *_tcp_receiver;
private slots:
    int recognize(QString file_name);
};

#endif // LOGIN_SERVER_H