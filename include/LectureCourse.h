#ifndef LECTURE_COURSE_H
#define LECTURE_COURSE_H

#include "Course.h"
#include <string>


class LectureCourse : public Course
{
public:
    LectureCourse(const std::string& code,
                  const std::string& title,
                  int creditValue,
                  int capacity);

    int LectureCourse::computeGradeWeighting() const override;
    std::string describeType() const override;
};

#endif