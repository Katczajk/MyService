#include "myservice.h"


myservice::myservice(int argc, char **argv) : QtService<QCoreApplication>(argc, argv, "myservice")
{

    try {

        setServiceDescription(DESCRIPTION);
        setServiceFlags(QtServiceBase::CanBeSuspended);

    } catch (...) {

        ERROR_CON;

    }

}

myservice::~myservice()
{
    try {



    } catch (...) {

        ERROR_DES;

    }
}

void myservice::start()
{
    try {

    QCoreApplication *app = application();

    DEBUGMSG << "Service started";
    DEBUGMSG << app->applicationDirPath();
    QtService::instance()->logMessage("Service started ...");
    QtService::logMessage("Test Message", Success, 10000);

    } catch (...) {

        ERROR_START;

    }
}

void myservice::pause()
{
    try {



    } catch (...) {

        ERROR_PAUSE;

    }
}

void myservice::resume()
{
    try {



    } catch (...) {

        ERROR_RESUME;

    }
}

void myservice::stop()
{
    try {



    } catch (...) {

        ERROR_STOP;

    }
}

