#include "StorageManager.h"

void StorageManager::saveAll()
{
    users.save();
    courses.save();
    enrolments.save();
    attendance.save();
}

void StorageManager::loadAll()
{
    users.load();
    courses.load();
    enrolments.load();
    attendance.load();
}