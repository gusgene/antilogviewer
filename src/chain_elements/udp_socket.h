// This Source Code Form is subject to the terms of the
// Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed
// with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
// Copyright 2019 Artem Yamshanov, me [at] anticode.ninja

#ifndef UDP_SOCKET_H
#define UDP_SOCKET_H

#include <QtGlobal>
#include <QHash>

#include "log_item.h"
#include "chain_elements/chain_element.h"

class QGridLayout;
class QUdpSocket;

class UdpSocket : public ChainElement
{
public:
    UdpSocket();
    virtual ~UdpSocket();

    virtual const char* name() {
        return "Udp Socket";
    }

    virtual void createUI(QGridLayout* layout);

private:
    quint16 _listenPort;
    QUdpSocket* _socket;
    QHash<QString, LogLevel> _levels;
};

#endif // UDP_SOCKET_H
