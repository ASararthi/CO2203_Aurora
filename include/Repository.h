#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>
#include <string>

template <typename T>
class Repository
{
protected:
    std::vector<T> items;

public:
    void add(T item);
    void remove(const std::string& id);
    T* findById(const std::string& id);
    std::vector<T> findAll() const;

    void save();
    void load();

    virtual ~Repository() = default;
};

#endif
