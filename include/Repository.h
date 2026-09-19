#ifndef REPOSITORY_H
#define REPOSITORY_H
#include <map>
#include <vector>
#include <string>

template <typename T>
class Repository
{
protected:
    std::map<std::string, T> items;
    std::string FilePath;

public:
    Repository() = default;

    void add(T item);
    void remove(const std::string& id);

    T findById(const std::string& id);

    std::vector<T> findAll() const;

    void save();
    void load();

    virtual ~Repository() = default;
};

#endif