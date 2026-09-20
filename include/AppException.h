#ifndef APP_EXCEPTION_H
#define APP_EXCEPTION_H

#include <exception>
#include <string>

class AppException : public std::exception
{
protected:
    std::string message;

public:
    explicit AppException(const std::string& message);
    virtual ~AppException() noexcept = default;

    const char* what() const noexcept override;
};

#endif