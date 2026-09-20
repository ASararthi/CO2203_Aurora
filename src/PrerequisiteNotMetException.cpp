#include "../include/PrerequisiteNotMetException.h"

PrerequisiteNotMetException::PrerequisiteNotMetException(
    const std::string& missingPrerequisite)
    : AppException(
          "Prerequisite not satisfied: " +
          missingPrerequisite),
      missingPrerequisite(missingPrerequisite)
{
}