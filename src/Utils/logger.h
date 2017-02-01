#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <sstream>


enum LogLevel
{
    logERROR,
    logWARNING,
    logINFO,
    logDEBUG
};


class Logger
{
public:
    Logger();
    virtual ~Logger();
    std::ostringstream& Get(LogLevel level = logINFO);
protected:
    std::ostringstream m_os;
private:
    LogLevel m_loggingLevel;
};


#endif /* LOGGER_H */
