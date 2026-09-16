#ifndef PROJECT_COURSE_H
#define PROJECT_COURSE_H

#include "Course.h"
#include <string>

class ProjectCourse : public Course
{
public:
    ProjectCourse(const std::string& code,
                  const std::string& title,
                  double creditValue,
                  int capacity);

    double computeGradeWeighting() const override;
    std::string describeType() const override;
};

#endif