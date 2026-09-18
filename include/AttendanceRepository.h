#ifndef ATTENDANCEREPOSITORY_H
#define ATTENDANCEREPOSITORY_H

#include "Repository.h"
#include "AttendanceRecord.h"

class AttendanceRepository : public Repository<AttendanceRecord*>
{
public:
    void save();
    void load();
};

#endif