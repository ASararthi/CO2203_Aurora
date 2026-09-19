#ifndef ATTENDANCESESSION_H
#define ATTENDANCESESSION_H

#include <string>
#include "TimeSlot.h"
#include "AttendanceCapture.h"
#include "Lecturer.h"

class Student;
class AttendanceRecord;

class AttendanceSession
{
private:
    TimeSlot slot;
    std::string sessionId;
    int expiryDurationMins;
    bool isOpen;
    AttendanceCapture* captureMechanism;

public:
    AttendanceSession(const TimeSlot& slot,
                      const std::string& sessionId,
                      int expiryDurationMins);

    void open();

    void close();

    bool hasExpired() const;

    void markPresent(Student& student);

    void setCaptureMechanism(AttendanceCapture* capture);

    const TimeSlot& getSlot() const;

    bool getIsOpen() const;

    void appendCorrection(AttendanceRecord& original, Lecturer& lecturer, std::string reason)
};

#endif