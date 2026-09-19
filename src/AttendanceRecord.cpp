#include "AttendanceRecord.h"

AttendanceRecord::AttendanceRecord(const std::string& studentId,
                                   const std::string& sessionId,
                                   const std::string& timestamp,
                                   const std::string& status,
                                   const std::string& capturedVia,
                                   bool isCorrection)
    : studentId(studentId),
      sessionId(sessionId),
      timestamp(timestamp),
      status(status),
      capturedVia(capturedVia),
      isCorrection(isCorrection)
{
}


std::ostream& operator<<(std::ostream& os,
                         const AttendanceRecord& record)
{
    os << "Student ID: " << record.studentId
       << " | Session ID: " << record.sessionId
       << " | Timestamp: " << record.timestamp
       << " | Status: " << record.status
       << " | Captured via: " << record.capturedVia
       << " | Correction: "
       << (record.isCorrection ? "Yes" : "No");

    return os;
}