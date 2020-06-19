#ifndef MYSERVICE_H
#define MYSERVICE_H


#include <QCoreApplication>
#include <QObject>
#include <QDebug>
#include <qtservice.h>
#include "define.h"

class myservice : public QtService<QCoreApplication>
{
public:

    /** constructor and head options to class myservice **/
    /** also used destructor **/

    myservice(int argc, char **argv);
    ~myservice();

    /** Service Options for Windows **/
    void start();

    void pause();

    void resume();

    void stop();

private:



};

#endif // MYSERVICE_H
