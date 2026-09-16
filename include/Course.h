#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include <ostream>

class Lecturer;

class Course
{
protected:
    std::string code;
    std::string title;
    double creditValue;
    int capacity;

    Lecturer* lecturer;
    std::vector<Course*> prerequisites;

public:
    Course(const std::string& code,
           const std::string& title,
           double creditValue,
           int capacity);

    virtual ~Course();

    virtual double computeGradeWeighting() const = 0;
    virtual std::string describeType() const = 0;

    bool isFull() const;

    std::string getCode() const;
    std::string getTitle() const;

    friend std::ostream& operator<<(std::ostream& os,
                                    const Course& course);
};

#endif