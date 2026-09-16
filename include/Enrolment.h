#ifndef ENROLMENT_H
#define ENROLMENT_H

#include <string>

class Student;
class Course;

class Enrolment
{
private:
    Student* student;
    Course* course;
    std::string enrolmentDate;
    std::string status;

public:
    Enrolment(Student* student,
              Course* course,
              const std::string& enrolmentDate,
              const std::string& status);

    Student* getStudent() const;
    Course* getCourse() const;

    std::string getEnrolmentDate() const;
    std::string getStatus() const;
};

#endif