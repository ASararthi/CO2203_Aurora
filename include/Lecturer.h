#ifndef LECTURER_H
#define LECTURER_H

#include "Person.h"

#include <vector>
#include <string>

class Student;
class Course;
class TimeSlot;
class AttendanceSession;

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

    std::vector<Student*> viewEnrolmentList(
        Course& course) const;

    AttendanceSession& openAttendanceSession(
        TimeSlot& slot,
        int durationMins);

    void closeAttendanceSession(
        AttendanceSession& session);
};

#endif