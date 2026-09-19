#ifndef LECTURE_COURSE_H
#define LECTURE_COURSE_H

#include "Course.h"
#include <string>


class LectureCourse : public Course
{

private:
    double examWeighting;
public:
    LectureCourse(const std::string& code,
                  const std::string& title,
                  int creditValue,
                  int capacity);

    double computeGradeWeighting() const override;
    std::string describeType() const override;
};

#endif