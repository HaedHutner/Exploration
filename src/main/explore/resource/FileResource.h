#ifndef EXPLORATION_FILERESOURCE_H
#define EXPLORATION_FILERESOURCE_H

#include <filesystem>

#include "Resource.h"

template <typename T>
class FileResource : public Resource {

    T value;

public:

    FileResource(std::filesystem::path filePath);

    bool exists() const override;

    Resource *clone() const override;

    T& get() const;

};

#endif //EXPLORATION_FILERESOURCE_H
