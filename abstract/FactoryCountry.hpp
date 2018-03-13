#ifndef JM_MEETUP_FACTORY_COUNTRY
#define JM_MEETUP_FACTORY_COUNTRY

#include <iostream>
#include "AbstractFactoryCountry.hpp"

class FactoryCountry {
public:
    static AbstractFactoryCountry* create(const std::string &option);
};

#endif //JM_MEETUP_FACTORY_COUNTRY
