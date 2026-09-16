#include "../include/Student.h"

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