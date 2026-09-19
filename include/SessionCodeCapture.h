#ifndef SESSIONCODECAPTURE_H
#define SESSIONCODECAPTURE_H

#include <string>
#include "AttendanceCapture.h"

class AttendanceSession;

class SessionCodeCapture : public AttendanceCapture
{
private:
    std::string currentCode;
    int codeLength;
    std::string expiryTime;

public:
    SessionCodeCapture(int codeLength = 6);

    void beginSession(AttendanceSession& session) override;

    std::string captureNext() override;

    void endSession() override;

    std::string generateCode() const;

};

#endif