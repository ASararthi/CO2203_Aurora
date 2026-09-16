#include "../include/Lecturer.h"

Lecturer::Lecturer(const std::string& id,
                   const std::string& name,
                   const std::string& username,
                   const std::string& password)
    : Person(id, name, username, password)
{
}

void Lecturer::showMenu()
{
    // Lecturer menu will be handled by the integration part.
}