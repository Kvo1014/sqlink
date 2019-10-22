#ifndef CALENDAR_H
#define CALENDAR_H
#include "meeting.h"
#include <map>

#include <iostream>

using namespace std;

class Calendar
{
public:
   ~Calendar() {}
    Calendar() {}
    void cleanC();
    void print() const;

    Meeting_t* createMeeting(float begin, float end, const string& subject);
    bool insertMeeting(const Meeting_t* meeting);
    bool removeMeeting(float begin);
    Meeting_t* findMeeting(float begin) const;


private:
    map<float, Meeting_t*> m_calendar;
    Calendar(const Calendar& calendar);
    Calendar& operator=(const Calendar& calendar);

    typedef typename map<float, Meeting_t*>::iterator iter;
    typedef typename map<float, Meeting_t*>::const_iterator iterConst;


};
#endif // CALENDAR_H
