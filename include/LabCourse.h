#ifndef LAB_COURSE_H
#define LAB_COURSE_H

#include "Course.h"
#include <string>


class LabCourse : public Course
{

private:
    double labReportWeighting;
public:
    LabCourse(const std::string& code,
              const std::string& title,
              int creditValue,
              int capacity);

    double computeGradeWeighting() const override;
    std::string describeType() const override;
};

#endif