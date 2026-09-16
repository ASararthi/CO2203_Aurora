#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "Person.h"
#include <string>

class Administrator : public Person
{
public:
    Administrator(const std::string& id,
                  const std::string& name,
                  const std::string& username,
                  const std::string& password);

    void showMenu() override;
};

#endif