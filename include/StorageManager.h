#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H

#include "UserRepository.h"
#include "CourseRepository.h"
#include "EnrolmentRepository.h"
#include "AttendanceRepository.h"

class StorageManager
{
private:
    UserRepository users;
    CourseRepository courses;
    EnrolmentRepository enrolments;
    AttendanceRepository attendance;

public:
    void saveAll();
    void loadAll();
};

#endif