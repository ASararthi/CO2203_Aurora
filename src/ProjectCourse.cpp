#include "../include/ProjectCourse.h"

ProjectCourse::ProjectCourse(const std::string& code,
                             const std::string& title,
                             int creditValue,
                             int capacity)
    : Course(code, title, creditValue, capacity)
{
}

int ProjectCourse::computeGradeWeighting() const
{
    return 100;
}

std::string ProjectCourse::describeType() const
{
    return "Project";
}