#include "../include/CourseFullException.h"

CourseFullException::CourseFullException(const std::string& courseCode): AppException(
          "Course " + courseCode + " is full.")
{
}