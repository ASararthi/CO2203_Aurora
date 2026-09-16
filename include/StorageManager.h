#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H

#include "UserRepository.h"
#include "CourseRepository.h"
#include "EnrolmentRepository.h"
#include "AttendanceRepository.h"

class StorageManager
{
private:
    UserRepository userRepository;
    CourseRepository courseRepository;
    EnrolmentRepository enrolmentRepository;
    AttendanceRepository attendanceRepository;

public:
    StorageManager() = default;

    void saveAll();
    void loadAll();

    UserRepository& getUserRepository();
    CourseRepository& getCourseRepository();
    EnrolmentRepository& getEnrolmentRepository();
    AttendanceRepository& getAttendanceRepository();
};

#endif