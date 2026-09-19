#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
protected:
    std::string id;
    std::string name;
    std::string username;
    std::string passwordHash;

public:
    Person(const std::string& id,
           const std::string& name,
           const std::string& username,
           const std::string& password);

    virtual ~Person();

    virtual void showMenu() = 0; //this is our pure virtual function 

    std::string getId() const;
    std::string getName() const;

    bool authenticate(const std::string& password) const;
};

#endif