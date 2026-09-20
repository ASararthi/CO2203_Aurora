#include "../include/Lecturer.h"

#include "../include/Student.h"
#include "../include/Course.h"
#include "../include/AttendanceSession.h"
#include "../include/TimeSlot.h"
#include "../include/Enrolment.h"

Lecturer::Lecturer(
    const std::string& id,
    const std::string& name,
    const std::string& username,
    const std::string& password)
    : Person(id, name, username, password)
{
}

void Lecturer::showMenu()
{
    // Application handles lecturer menu.
}

std::vector<Student*> Lecturer::viewEnrolmentList(
    Course& course) const
{
    std::vector<Student*> students;

    // Actual repository-based implementation
    // can be connected by Member 3.

    return students;
}

AttendanceSession&
Lecturer::openAttendanceSession(
    TimeSlot& slot,
    int durationMins)
{
    //The actual AttendanceSession constructor - Member 2.


    static AttendanceSession* session = nullptr;

    if (session == nullptr)
    {
        // This must be connected to Member 2's actual AttendanceSession constructor.
    }

    return *session;
}

void Lecturer::closeAttendanceSession(
    AttendanceSession& session)
{
    session.close();
}