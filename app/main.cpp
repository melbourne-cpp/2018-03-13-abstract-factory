#include <string>
#include <iostream>
#include <memory>
#include "abstract/FactoryCountry.hpp"

int main() {

    std::string option;
    std::cin >> option;

    auto ptr   = FactoryCountry::create(option);
    auto u_ptr = std::unique_ptr<AbstractFactoryCountry>(ptr);

    if (u_ptr) {
        u_ptr->show_flag();
        u_ptr->show_map();
    }

    return 0;
}
