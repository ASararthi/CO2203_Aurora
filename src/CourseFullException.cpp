#ifndef COURSE_FULL_EXCEPTION_H
#define COURSE_FULL_EXCEPTION_H

#include "AppException.h"
#include <string>

class CourseFullException : public AppException
{
private:
    std::string courseCode;
    int capacity;

public:
    CourseFullException(const std::string& courseCode,
                        int capacity);
};

#endif