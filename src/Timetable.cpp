#include "Timetable.h"

Timetable::Timetable()
{
}


void Timetable::addSlot(const TimeSlot& slot)
{
    slots.push_back(slot);
}

bool Timetable::clashesWith(const Timetable& other) const
{
    for (const TimeSlot& thisSlot : slots)
    {
        for (const TimeSlot& otherSlot : other.slots)
        {
            if (thisSlot.overlaps(otherSlot))
            {
                return true;
            }
        }
    }

    return false;
}

std::ostream& operator<<(std::ostream& os,
                         const Timetable& timetable)
{
    for (const TimeSlot& slot : timetable.slots)
    {
        os << slot << '\n';
    }

    return os;
}