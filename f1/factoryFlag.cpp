#include "factoryFlag.hpp"
#include "AustraliaFlag.hpp"
#include "ChileFlag.hpp"

Flag* FactoryFlag::create(const std::string &option) {
    if(option == "Australia")
        return new AustraliaFlag();
    else if(option == "Chile")
        return new ChileFlag();
    else
        return nullptr;
}
