#ifndef FILEREPLAYCAPTURE_H
#define FILEREPLAYCAPTURE_H

#include "AttendanceCapture.h"
#include <string>
#include <fstream>

class FileReplayCapture : public AttendanceCapture
{
private:
    std::string filePath;
    std::ifstream inputFile;

public:
    FileReplayCapture(const std::string& path);

    void beginSession(AttendanceSession& session) override;
    std::string captureNext() override;
    void endSession() override;

    ~FileReplayCapture() override;
};

#endif