#include "../include/Enrolment.h"

Enrolment::Enrolment(Student* student,
                     Course* course,
                     const std::string& enrolmentDate,
                     const std::string& status)
    : student(student),
      course(course),
      enrolmentDate(enrolmentDate),
      status(status)
{
}

Student* Enrolment::getStudent() const
{
    return student;
}

Course* Enrolment::getCourse() const
{
    return course;
}

std::string Enrolment::getEnrolmentDate() const
{
    return enrolmentDate;
}

std::string Enrolment::getStatus() const
{
    return status;
}