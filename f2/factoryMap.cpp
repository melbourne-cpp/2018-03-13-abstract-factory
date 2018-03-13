#include "factoryMap.hpp"
#include "AustraliaMap.hpp"
#include "ChileMap.hpp"

Map* FactoryMap::create(const std::string &option) {
    if(option == "Australia")
        return new AustraliaMap();
    else if(option == "Chile")
        return new ChileMap();
    else
        return nullptr;
}
