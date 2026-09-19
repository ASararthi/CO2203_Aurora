#ifndef ATTENDANCECAPTURE_H
#define ATTENDANCECAPTURE_H

#include <string>

class AttendanceSession;

class AttendanceCapture
{
public:
    virtual ~AttendanceCapture();

    virtual void beginSession(AttendanceSession& session) = 0;
    virtual std::string captureNext() = 0;
    virtual void endSession() = 0;
};

#endif