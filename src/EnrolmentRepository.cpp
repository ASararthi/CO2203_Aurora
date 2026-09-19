#include "EnrolmentRepository.h"

void EnrolmentRepository::save()
{
    Repository<Enrolment*>::save();
}

void EnrolmentRepository::load()
{
    Repository<Enrolment*>::load();
}