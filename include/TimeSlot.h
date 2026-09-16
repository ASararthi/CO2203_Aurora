#ifndef TIMESLOT_H
#define TIMESLOT_H

#include <iostream>
#include <string>

class TimeSlot
{
private:
    std::string day;
    std::string startTime;
    std::string endTime;
    std::string location;

public:
    TimeSlot(const std::string& day,
             const std::string& startTime,
             const std::string& endTime,
             const std::string& location);

    bool overlaps(const TimeSlot& other) const;

    bool operator==(const TimeSlot& other) const;

    friend std::ostream& operator<<(std::ostream& os,
                                    const TimeSlot& slot);
};

#endif
