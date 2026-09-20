#include "../include/Student.h"
#include "../include/Course.h"

Student::Student(const std::string& id,
                 const std::string& name,
                 const std::string& username,
                 const std::string& password)
    : Person(id, name, username, password)
{
}

void Student::showMenu()
{
    // Student menu will be handled by the integration part.
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
