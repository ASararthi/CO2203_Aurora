#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "Person.h"
#include <string>

class Administrator : public Person
{
public:
    Administrator(const std::string& id,
                  const std::string& name,
                  const std::string& username,
                  const std::string& password);

    void showMenu() override;

    void createUser(Person* p);

    void removeUser(const std::string& id);

    void createCourse(const std::string& courseId, const std::string& courseName); //added coursename as well

    void removeCourse(const std::string& courseId);

    std::string generateEnrolmentReport() const;
};

#endif