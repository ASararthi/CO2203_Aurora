#include "../include/Course.h"
#include "../include/Student.h"
#include "../include/Enrolment.h"

Course::Course(const std::string& code,
               const std::string& title,
               int creditValue,
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

bool Course::hasPrerequisitesSatisfiedBy(
    const Student& student) const
{
    // No prerequisites
    if (prerequisites.empty())
    {
        return true;
    }

    // Prerequisite checking will be handled when the student's enrolment data is connected.
    return true;
}

std::ostream& operator<<(std::ostream& os, const Course& course)
{
    os << course.code << " - "
       << course.title;

    return os;
}