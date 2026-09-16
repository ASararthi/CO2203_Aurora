#include "../include/Administrator.h"

Administrator::Administrator(const std::string& id,
                             const std::string& name,
                             const std::string& username,
                             const std::string& password)
    : Person(id, name, username, password)
{
}

void Administrator::showMenu()
{
    // Administrator menu will be handled by the integration part.
}