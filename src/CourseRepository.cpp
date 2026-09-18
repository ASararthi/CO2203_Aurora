#include "CourseRepository.h"

void CourseRepository::save()
{
    Repository<Course*>::save();
}

void CourseRepository::load()
{
    Repository<Course*>::load();
}