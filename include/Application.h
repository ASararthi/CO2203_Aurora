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
    void run();

    bool login(
        const std::string& username,
        const std::string& password
    );

    void dispatchMenu();
};

#endif