#ifndef ENROLMENTREPOSITORY_H
#define ENROLMENTREPOSITORY_H

#include "Repository.h"
#include "Enrolment.h"

class EnrolmentRepository : public Repository<Enrolment*>
{
public:
    void save();
    void load();
};

#endif