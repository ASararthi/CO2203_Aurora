#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <map>
#include <string>
#include <vector>

template <typename T>
class Repository
{
protected:
    std::map<std::string, T> items;
    std::string filePath;

public:
    void add(T item);
    void remove(const std::string& id);
    T findById(const std::string& id);
    std::vector<T> findAll();

    void save();
    void load();
};

#endif


