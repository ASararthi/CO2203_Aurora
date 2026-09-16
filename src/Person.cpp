#include "../include/Person.h"

Person::Person(const std::string& id,
               const std::string& name,
               const std::string& username,
               const std::string& password)
{
    this->id = id;
    this->name = name;
    this->username = username;
    this->passwordHash = password;
}

Person::~Person()
{
}

std::string Person::getId() const
{
    return id;
}

std::string Person::getName() const
{
    return name;
}

bool Person::authenticate(const std::string& password) const
{
    return password == passwordHash;
}