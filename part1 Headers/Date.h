#ifndef __DATE_H
#define __DATE_H

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int day, int month, int year);//Should check for a valid date, so no 64 of january

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    char** format() const;
    bool isBefore(const Date& other) const;
};

#endif // __DATE_H
