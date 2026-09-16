#ifndef APPLICATION_H
#define APPLICATION_H

#include "Person.h"
#include "StorageManager.h"

#include <string>

class Application
{
private:
    Person* currentUser;
    StorageManager storage;

public:
    Application();

    void run();

    Person* login(
        const std::string& username,
        const std::string& password
    );

    void dispatchMenu();

    ~Application();
};

#endif