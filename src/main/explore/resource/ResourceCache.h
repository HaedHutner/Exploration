#ifndef EXPLORATION_RESOURCECACHE_H
#define EXPLORATION_RESOURCECACHE_H

#include <string>
#include <unordered_map>
#include <memory>
#include <explore/texture/Texture.h>
#include <explore/3d/Mesh.h>
#include <explore/3d/Shader.h>

#include "Resource.h"

class ResourceCache {

    std::unordered_map<std::string, std::weak_ptr<Resource>> resources;

    ResourceCache();
    ~ResourceCache();

public:

    static ResourceCache& instance() {
        static ResourceCache cache;
        return cache;
    }

    Texture& getTexture(const std::string& path);

    Mesh& getMesh(const std::string& path);

    Shader& getShader(const std::string& path);

    void cacheTexture(const std::string& path, Texture texture);

    void cacheMesh(const std::string& path, Mesh mesh);

    void cacheShader(const std::string& path, Shader shader);
};

#endif //EXPLORATION_RESOURCECACHE_H
