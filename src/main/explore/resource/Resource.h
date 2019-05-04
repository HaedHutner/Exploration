#ifndef EXPLORATION_RESOURCE_H
#define EXPLORATION_RESOURCE_H

#include <string>

struct Resource {

    virtual bool exists() const = 0;

    virtual Resource* clone() const = 0;

};

#endif //EXPLORATION_RESOURCE_H
