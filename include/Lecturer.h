#ifndef LECTURER_H
#define LECTURER_H

#include <vector>
#include "Person.h"
#include <string>
#include "Course.h"
#include "AttendanceSession.h"

class Student;//why did we add this? because we are using student in the view enrolment list function

class Lecturer : public Person
{
private:
    std::vector<Course*> assignedCourses;
public:
    Lecturer(const std::string& id,
             const std::string& name,
             const std::string& username,
             const std::string& password);

    void showMenu() override;

    std::vector<Student*> viewEnrolmentList(const Course& course) const;
    AttendanceSession* openAttendanceSession( const TimeSlot& slot, const std::string& sessionId, int durationMins);//why did we add session id?
    void closeAttendanceSession(AttendanceSession& session);
};  

#endif