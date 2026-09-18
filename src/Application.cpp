#include "Application.h"

#include <iostream>

void Application::run()
{
    std::string username;
    std::string password;

    std::cout << "=============================\n";
    std::cout << "           AURORA\n";
    std::cout << "=============================\n";

    std::cout << "Username: ";
    std::cin >> username;

    std::cout << "Password: ";
    std::cin >> password;

    if (login(username, password))
    {
        dispatchMenu();
    }
    else
    {
        std::cout << "Invalid username or password.\n";
    }
}

bool Application::login(
    const std::string& username,
    const std::string& password)
{
    (void)username;
    (void)password;

    return false;
}

void Application::dispatchMenu()
{
    if (currentUser != nullptr)
    {
        currentUser->showMenu();
    }
}