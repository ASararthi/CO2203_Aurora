#ifndef TIMETABLE_CLASH_EXCEPTION_H
#define TIMETABLE_CLASH_EXCEPTION_H

#include "AppException.h"
#include <string>

class TimetableClashException : public AppException
{
public:
    explicit TimetableClashException(
        const std::string& message);
};

#endif