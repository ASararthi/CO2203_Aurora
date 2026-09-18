#ifndef FILEREPLAYCAPTURE_H
#define FILEREPLAYCAPTURE_H

#include "AttendanceCapture.h"

#include <fstream>
#include <string>

class AttendanceSession;

class FileReplayCapture : public AttendanceCapture
{
private:
    std::string filePath;

public:
    FileReplayCapture(const std::string& path);

    void beginSession(AttendanceSession& session) override;
    std::string captureNext() override;
    void endSession() override;
};

#endif