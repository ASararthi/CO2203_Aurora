#include "../include/LabCourse.h"

LabCourse::LabCourse(const std::string& code,
                     const std::string& title,
                     double creditValue,
                     int capacity)
    : Course(code, title, creditValue, capacity)
{
}

double LabCourse::computeGradeWeighting() const
{
    return 100.0;
}

std::string LabCourse::describeType() const
{
    return "Lab";
}