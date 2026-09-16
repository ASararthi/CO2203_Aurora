#ifndef ATTENDANCEREGISTER_H
#define ATTENDANCEREGISTER_H

#include <iostream>
#include <vector>
#include "AttendanceSession.h"
#include "AttendanceRecord.h"

class Student;
class Course;
class TimeSlot;

class AttendanceRegister
{
private:
    std::vector<AttendanceSession> sessions;
    std::vector<AttendanceRecord> records;

public:
    AttendanceRegister();

    void openSession(const TimeSlot& slot,
                     const std::string& sessionId,
                     int durationMins);

    double attendancePercentageFor(const Student& student) const;

    double attendancePercentageForCourse(const Course& course) const;

    friend std::ostream& operator<<(std::ostream& os,
                                    const AttendanceRegister& reg);
};

#endif