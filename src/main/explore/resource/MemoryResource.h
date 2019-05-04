#ifndef EXPLORATION_MEMORYRESOURCE_H
#define EXPLORATION_MEMORYRESOURCE_H

#include "Resource.h"

template <typename T>
class MemoryResource : public Resource {

    T value;

public:

    MemoryResource(T& object);

    bool exists() const override;

    Resource *clone() const override;

    T& get() const;

};

#endif //EXPLORATION_MEMORYRESOURCE_H
