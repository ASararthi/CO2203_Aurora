#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <iostream>
#include <vector>
#include "TimeSlot.h"

class Timetable
{
private:
    std::vector<TimeSlot> slots;

public:
    Timetable();

    void addSlot(const TimeSlot& slot);

    bool clashesWith(const Timetable& other) const;

    friend std::ostream& operator<<(std::ostream& os,
                                    const Timetable& timetable);
};

#endif