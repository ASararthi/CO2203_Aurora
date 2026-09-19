#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>
#include <string>
#include "Timetable.h"

class Course;
class Enrolment;

class Student : public Person
{
private:
    std::vector<Enrolment*> enrolments;

public:
    Student(const std::string& id,
            const std::string& name,
            const std::string& username,
            const std::string& password);

    void showMenu() override;

    void enrol(Course& course);
    void drop(Course& course);
    Timetable getTimetable() const;

    void checkInWithCode(const std::string& code);
};

#endif