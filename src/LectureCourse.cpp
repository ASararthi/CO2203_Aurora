#include "../include/LectureCourse.h"

LectureCourse::LectureCourse(const std::string& code,
                             const std::string& title,
                             double creditValue,
                             int capacity)
    : Course(code, title, creditValue, capacity)
{
}

double LectureCourse::computeGradeWeighting() const
{
    return 100.0;
}

std::string LectureCourse::describeType() const
{
    return "Lecture";
}