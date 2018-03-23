#include <string>
#include <iostream>
#include <memory>
#include "Factory/ConcreteFactoryAustralia.hpp"
#include "Factory/ConcreteFactoryChile.hpp"

void do_job(AbstractFactory &factory);

int main() {

    std::string option;
    std::cin >> option;

    if(option == "Australia") {
        ConcreteFactoryAustralia factory;
        do_job(factory);
    } else if (option == "Chile") {
        ConcreteFactoryChile factory;
        do_job(factory);
    }

    return 0;
}


void do_job(AbstractFactory &factory) {
    std::unique_ptr<AbstractProductFlag> flag_ptr = factory.createFlag();
    std::unique_ptr<AbstractProductMap>  map_ptr  = factory.createMap();

    flag_ptr->show();
    map_ptr->show();
}
