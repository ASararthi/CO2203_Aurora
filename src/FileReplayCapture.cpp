#include "FileReplayCapture.h"
#include "AttendanceSession.h"

#include <fstream>
#include <stdexcept>

FileReplayCapture::FileReplayCapture(const std::string& path)
    : filePath(path)
{
}

void FileReplayCapture::beginSession(AttendanceSession& session)
{
    (void)session;

    std::ifstream inputFile(filePath);

    if (!inputFile.is_open())
    {
        throw std::runtime_error(
            "Unable to open attendance replay file: " + filePath
        );
    }
}

std::string FileReplayCapture::captureNext()
{
    std::ifstream inputFile(filePath);
    std::string studentId;

    if (std::getline(inputFile, studentId))
    {
        return studentId;
    }

    return "";
}

void FileReplayCapture::endSession()
{
}