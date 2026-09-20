#include "../include/LectureCourse.h"

LectureCourse::LectureCourse(const std::string& code,
                             const std::string& title,
                             int creditValue,
                             int capacity)
    : Course(code, title, creditValue, capacity)
{
}

int LectureCourse::computeGradeWeighting() const
{
    return 100;
}

std::string LectureCourse::describeType() const
{
    return "Lecture";
}