#include <iomanip>
#include <sstream>
#include "myTime.h"


MyTime::MyTime()
{
    time_t currTime;
    time(&currTime);    // Get current time
    m_localTime = localtime(&currTime);
}


MyTime::~MyTime()
{
}


// [TOREFACTOR]: Replace time methods with asctime
const std::string MyTime::currentHour() const
{
    std::ostringstream buffer;
    buffer << m_localTime->tm_hour;
    
    return buffer.str();
}


const std::string MyTime::currentMinute() const
{
    std::ostringstream buffer;
    buffer << std::setw(2) << std::setfill('0') << m_localTime->tm_min;
    
    return buffer.str();
}


const std::string MyTime::currentSecond() const
{
    std::ostringstream buffer;
    buffer << std::setw(2) << std::setfill('0') << m_localTime->tm_sec;
    
    return buffer.str();
}


const std::string MyTime::currentTime() const
{
    std::stringstream ss;
    ss << MyTime::currentHour() << ":" << MyTime::currentMinute()
        << ":" << MyTime::currentSecond();
        
    return ss.str();
}


const std::string MyTime::currentDate() const
{
    std::stringstream ss;
    ss << std::setw(2) << std::setfill('0') << m_localTime->tm_mday << "/"
        << std::setw(2) << std::setfill('0') << m_localTime->tm_mon << "/"
        << std::setw(4) << std::setfill('0') << (1900 + m_localTime->tm_year);
    
    return ss.str();
}


std::ostream& MyTime::operator<<(std::ostream &os)
{
    return os;
}
