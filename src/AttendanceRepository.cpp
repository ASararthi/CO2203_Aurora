#include "AttendanceRepository.h"

void AttendanceRepository::save()
{
    Repository<AttendanceRecord*>::save();
}

void AttendanceRepository::load()
{
    Repository<AttendanceRecord*>::load();
}