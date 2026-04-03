#ifndef M26TEST_H
#define M26TEST_H

#include <QtCore/QObject>
#include "mb86m26_control.h"
#include "../rtmp/rtmp-streamer.h"
//#include "librtmp/rtmp.h" // ign sudo apt install librtmp-dev

class m26test : public QObject
{
        Q_OBJECT
public:
        m26test(QString rtmp_url);
        ~m26test();
private:
        mb86m26_control * m26_a_control;
        Rtmp_streamer * streamer;
};

#endif