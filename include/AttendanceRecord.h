#ifndef ATTENDANCERECORD_H
#define ATTENDANCERECORD_H
#include "AttendanceSession.h"
#include <iostream>
#include <string>

class AttendanceRecord
{
private:
    Student* student;
    AttendanceSession* session;
    std::string timestamp;
    std::string status;
    std::string capturedVia;
    bool isCorrection;
    Lecturer* correctingLecturer;
    std::string correctionReason;
public:
    AttendanceRecord(Student* student, AttendanceSession* session);
    friend std::ostream& operator<<(std::ostream& os, const AttendanceRecord& r);
};
#endif