#include "UserRepository.h"

void UserRepository::save()
{
    Repository<Person*>::save();
}

void UserRepository::load()
{
    Repository<Person*>::load();
}