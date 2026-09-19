#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <map>
#include <vector>
#include <string>
#include <fstream>

template <typename T>
class Repository
{
protected:
    std::map<std::string, T> items;
    std::string FilePath;

public:
    Repository() = default;

    Repository(const std::string& filePath)
        : FilePath(filePath)
    {
    }

    void add(T item);
    void remove(const std::string& id);

    T findById(const std::string& id);

    std::vector<T> findAll() const;

    void save();
    void load();

    virtual ~Repository() = default;
};

template <typename T>
void Repository<T>::save()
{
    std::ofstream file(FilePath);

    if (!file)
    {
        return;
    }

    for (const auto& item : items)
    {
        file << *(item.second) << '\n';
    }

    file.close();
}

#endif