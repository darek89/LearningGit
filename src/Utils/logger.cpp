#include <cstdio>
#include "logger.h"
#include "myTime.h"


#ifdef DEBUG
    #define _DEBUG_ 1
#else
    #define _DEBUG_ 0
#endif


Logger::Logger()
{
    m_loggingLevel = logINFO;
}


Logger::~Logger()
{
    MyTime time = MyTime();
    m_os << std::endl;
    
    if (_DEBUG_)
    {
        fprintf(stderr, "[%s %s] %s", time.currentDate().c_str(),
            time.currentTime().c_str(), m_os.str().c_str());
    }
    else
    {
        fprintf(stderr, "%s", m_os.str().c_str());
    }
    
    fflush(stderr);
}


std::ostringstream& Logger::Get(LogLevel level)
{
    m_loggingLevel = level;
    return m_os;
}
