#include "../include/TimetableClashException.h"

TimetableClashException::TimetableClashException(
    const std::string& message)
    : AppException(message)
{
}