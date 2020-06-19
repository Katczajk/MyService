#ifndef DEFINE_H // Header Guard
#define DEFINE_H

#define DESCRIPTION "My Service"
#define ERROR_CON qCritical() << "An unknown error in the contructor"
#define ERROR_DES qCritical() << "An unknown error in the destructor"
#define ERROR_START qCritical() << "An unknown error at Start"
#define ERROR_STOP qCritical() << "An unknown error at Stop"
#define ERROR_RESUME qCritical() << "An unknown error at Resume"
#define ERROR_PAUSE qCritical() << "An unknown error at Pause"
#define DEBUGMSG qDebug()

#endif // DEFINE_H
