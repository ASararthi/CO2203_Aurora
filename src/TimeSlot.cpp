#include "TimeSlot.h"
#include <sstream>

// Constructor
TimeSlot::TimeSlot(const std::string& day,
                   const std::string& startTime,
                   const std::string& endTime,
                   const std::string& location)
    : day(day),
      startTime(startTime),
      endTime(endTime),
      location(location)
{
}

// Convert a time such as "08:30" into minutes
int convertToMinutes(const std::string& time)
{
    int hours;
    int minutes;
    char colon;

    std::stringstream ss(time);
    ss >> hours >> colon >> minutes;

    return hours * 60 + minutes;
}

// Check whether two time slots overlap
bool TimeSlot::overlaps(const TimeSlot& other) const
{
    // Different days cannot clash
    if (day != other.day)
    {
        return false;
    }

    int thisStart = convertToMinutes(startTime);
    int thisEnd = convertToMinutes(endTime);

    int otherStart = convertToMinutes(other.startTime);
    int otherEnd = convertToMinutes(other.endTime);

    // Two time periods overlap if each starts before the other ends
    return thisStart < otherEnd &&
           otherStart < thisEnd;
}

// Compare two time slots
bool TimeSlot::operator==(const TimeSlot& other) const
{
    return day == other.day &&
           startTime == other.startTime &&
           endTime == other.endTime &&
           location == other.location;
}

// Print a time slot
std::ostream& operator<<(std::ostream& os, const TimeSlot& slot)
{
    os << slot.day << " | "
       << slot.startTime << " - "
       << slot.endTime << " | "
       << slot.location;

    return os;
}