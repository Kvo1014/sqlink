#include<iostream>
#include "calendar.h"

void removeMeeting(Calendar* calendar)
{
    float begin;
    cout << "Enter begin hour of meeting that you want to remove:" << endl;
    cin >> begin;

    if(calendar->removeMeeting(begin))
    {
        cout << endl << "Meeting successfully removed" << endl << endl;
    }
    else
    {
        cout << endl << "There is no such meeting" << endl << endl;
    }
}
void insertMeeting(Calendar* calendar)
{
    float begin, end;
    string subject;
    Meeting_t* meeting;

    cout << "Enter begin hour, end hour and subject :" << endl;
    cin >> begin >> end >> subject;

    meeting = calendar->createMeeting(begin, end, subject);
    if(meeting != 0)
    {
        cout << endl << "New meeting:" << endl;
    }
    else
    {
        cout << endl << "Meeting creation error" << endl << endl;
        return;
    }

    if(calendar->insertMeeting(meeting))
    {
        cout << "Meeting successfully inserted" << endl << endl;
    }
    else
    {
        cout << "Meeting insertion failed" << endl << endl;
    }
}


void findMeeting(Calendar* calendar)
{
    float begin;
    cout << "please enter begin hour of meeting that you want to find:" << endl;
    cin >> begin;
    Meeting_t* meeting = calendar->findMeeting(begin);

    if(meeting != 0)
    {

    }
    else
    {

    }
}
