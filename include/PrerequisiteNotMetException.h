#ifndef PREREQUISITE_NOT_MET_EXCEPTION_H
#define PREREQUISITE_NOT_MET_EXCEPTION_H

#include "AppException.h"
#include <string>

class PrerequisiteNotMetException : public AppException
{
private:
    std::string missingPrerequisite;

public:
    explicit PrerequisiteNotMetException(
        const std::string& missingPrerequisite);
};

#endif