#include <iostream>
#include "ChileFactory.hpp"
#include "../f1/factoryFlag.hpp"
#include "../f2/factoryMap.hpp"

ChileFactory::ChileFactory() {
    auto flag_ptr = FactoryFlag::create("Chile");
    auto map_ptr  = FactoryMap::create("Chile");

    factory_flag = std::unique_ptr<Flag>(flag_ptr);
    factory_map = std::unique_ptr<Map>(map_ptr);
}

void ChileFactory::show_flag() {
    factory_flag->show_flag();
}

void ChileFactory::show_map() {
    factory_map->show_map();
}

ChileFactory::~ChileFactory() {}
