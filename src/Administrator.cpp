#include "../include/Administrator.h"

Administrator::Administrator(
    const std::string& id,
    const std::string& name,
    const std::string& username,
    const std::string& password)
    : Person(id, name, username, password)
{
}

void Administrator::showMenu()
{
    // Application handles administrator menu.
}

void Administrator::createUser(Person* p)
{
    // UserRepository / Application handles persistence.
}

void Administrator::removeUser(
    const std::string& id)
{
    // UserRepository handles removal.
}

void Administrator::createCourse(Course* c)
{
    // CourseRepository handles persistence.
}

void Administrator::removeCourse(
    const std::string& id)
{
    // CourseRepository handles removal.
}

std::string Administrator::generateEnrolmentReport()
{
    return "";
}