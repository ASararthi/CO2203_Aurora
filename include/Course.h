#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include <ostream>

class Student;
class Lecturer;
class Enrolment;

class Course
{
protected:
    std::string code;
    std::string title;
    int creditValue;
    int capacity;

    Lecturer* lecturer;
    std::vector<Course*> prerequisites;

public:
    Course(const std::string& code,
           const std::string& title,
           int creditValue,
           int capacity);

    virtual ~Course();

    virtual int computeGradeWeighting() const = 0;
    virtual std::string describeType() const = 0;

    bool isFull() const;
    bool hasPrerequisitesSatisfiedBy(const Student& student) const;

    std::string getCode() const;


    friend std::ostream& operator<<(std::ostream& os,
                                    const Course& course);
};

#endif