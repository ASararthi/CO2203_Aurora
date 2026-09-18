#ifndef COURSEREPOSITORY_H
#define COURSEREPOSITORY_H

#include "Repository.h"
#include "Course.h"

class CourseRepository : public Repository<Course*>
{
public:
    void save();
    void load();
};

#endif