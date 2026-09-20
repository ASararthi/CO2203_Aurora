#include "../include/LabCourse.h"

LabCourse::LabCourse(const std::string& code,
                     const std::string& title,
                     int creditValue,
                     int capacity)
    : Course(code, title, creditValue, capacity)
{
}

int LabCourse::computeGradeWeighting() const
{
    return 100;
}

std::string LabCourse::describeType() const
{
    return "Lab";
}