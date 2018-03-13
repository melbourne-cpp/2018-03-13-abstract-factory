#include <iostream>
#include "AustraliaFactory.hpp"
#include "../f1/factoryFlag.hpp"
#include "../f2/factoryMap.hpp"

AustraliaFactory::AustraliaFactory() {
    auto flag_ptr = FactoryFlag::create("Australia");
    auto map_ptr  = FactoryMap::create("Australia");

    factory_flag = std::unique_ptr<Flag>(flag_ptr);
    factory_map  = std::unique_ptr<Map>(map_ptr);
}

void AustraliaFactory::show_flag() {
    factory_flag->show_flag();
}

void AustraliaFactory::show_map() {
    factory_map->show_map();
}

AustraliaFactory::~AustraliaFactory() {}
