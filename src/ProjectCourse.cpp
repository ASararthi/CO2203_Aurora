#include "../include/ProjectCourse.h"

ProjectCourse::ProjectCourse(const std::string& code,
                             const std::string& title,
                             double creditValue,
                             int capacity)
    : Course(code, title, creditValue, capacity)
{
}

double ProjectCourse::computeGradeWeighting() const
{
    return 100.0;
}

std::string ProjectCourse::describeType() const
{
    return "Project";
}