#ifndef MYTIME_H
#define MYTIME_H

#include <ctime>
#include <iostream>
#include <string>


class MyTime
{
public:
    MyTime();
    virtual ~MyTime();
    const std::string currentHour() const;
    const std::string currentMinute() const;
    const std::string currentSecond() const; 
    const std::string currentTime() const;
    const std::string currentDate() const;
    std::ostream& operator<<(std::ostream &os);
private:
    struct tm* m_localTime;
};


#endif /* MYTIME_H */
