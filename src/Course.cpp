#include "../include/Course.h"

Course::Course(const std::string& code,
               const std::string& title,
               double creditValue,
               int capacity)
    : code(code),
      title(title),
      creditValue(creditValue),
      capacity(capacity),
      lecturer(nullptr)
{
}

Course::~Course()
{
}

bool Course::isFull() const
{
    return false;
}

std::string Course::getCode() const
{
    return code;
}

std::string Course::getTitle() const
{
    return title;
}

std::ostream& operator<<(std::ostream& os, const Course& course)
{
    os << course.code << " - "
       << course.title;

    return os;
}