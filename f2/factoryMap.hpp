#ifndef JM_MEETUP_FACTORYMAP
#define JM_MEETUP_FACTORYMAP

#include "Map.hpp"

class FactoryMap {
public:
    static Map *create(const std::string &option);
};

#endif //JM_MEETUP_FACTORYMAP

