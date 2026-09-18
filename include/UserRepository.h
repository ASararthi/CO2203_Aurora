#ifndef USERREPOSITORY_H
#define USERREPOSITORY_H

#include "Repository.h"
#include "Person.h"

class UserRepository : public Repository<Person*>
{
public:
    void save();
    void load();
};

#endif