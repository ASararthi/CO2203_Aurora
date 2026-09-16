#ifndef ATTENDANCERECORD_H
#define ATTENDANCERECORD_H

#include <iostream>
#include <string>

class AttendanceRecord
{
private:
    std::string studentId;
    std::string sessionId;
    std::string timestamp;
    std::string status;
    std::string capturedVia;
    bool isCorrection;

public:
    AttendanceRecord(const std::string& studentId,
                     const std::string& sessionId,
                     const std::string& timestamp,
                     const std::string& status,
                     const std::string& capturedVia,
                     bool isCorrection = false);

    friend std::ostream& operator<<(std::ostream& os,
                                    const AttendanceRecord& record);
};

#endif