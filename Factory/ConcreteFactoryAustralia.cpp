#include <iostream>
#include "ConcreteFactoryAustralia.hpp"

std::unique_ptr<AbstractProductFlag> ConcreteFactoryAustralia::createFlag() const {
    return std::unique_ptr<AbstractProductFlag>(new ProductFlagAustralia());
}

std::unique_ptr<AbstractProductMap> ConcreteFactoryAustralia::createMap() const {
    return std::unique_ptr<AbstractProductMap>(new ProductMapAustralia);
}

ConcreteFactoryAustralia::~ConcreteFactoryAustralia() {}
