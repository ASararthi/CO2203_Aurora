#ifndef COURSE_FULL_EXCEPTION_H
#define COURSE_FULL_EXCEPTION_H

#include "AppException.h"
#include <string>

class CourseFullException : public AppException
{
public:
    explicit CourseFullException(
        const std::string& courseCode);
};

#endif