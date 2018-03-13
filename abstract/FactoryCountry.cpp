#include "FactoryCountry.hpp"
#include "ChileFactory.hpp"
#include "AustraliaFactory.hpp"

AbstractFactoryCountry* FactoryCountry::create(const std::string &option) {
    if(option == "Australia")
        return new AustraliaFactory();
    else if(option == "Chile")
        return new ChileFactory();
    else
        return nullptr;
}
