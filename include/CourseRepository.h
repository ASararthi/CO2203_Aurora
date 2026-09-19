#ifndef COURSEREPOSITORY_H
#define COURSEREPOSITORY_H

#include "Repository.h"
#include "Course.h"

class CourseRepository : public Repository<Course*>
{
public:
    CourseRepository()
        : Repository<Course*>("courses.txt")
    {
    }
};

#endif