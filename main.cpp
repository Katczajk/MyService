#include <QCoreApplication>
#include "myservice.h"

int main(int argc, char *argv[])
{
    /* disabled for now                */
    /* QCoreApplication a(argc, argv); */
    myservice service(argc, argv);
    return service.exec();
}
