#include <iostream>
#include "ConcreteFactoryChile.hpp"

std::unique_ptr<AbstractProductFlag> ConcreteFactoryChile::createFlag() const {
    return std::unique_ptr<AbstractProductFlag>(new ProductFlagChile());
}

std::unique_ptr<AbstractProductMap> ConcreteFactoryChile::createMap() const {
    return std::unique_ptr<AbstractProductMap>(new ProductMapChile);
}

ConcreteFactoryChile::~ConcreteFactoryChile() {}
