#ifndef JM_MEETUP_FACTORYFLAG
#define JM_MEETUP_FACTORYFLAG

#include "Flag.hpp"

class FactoryFlag {
public:
    static Flag *create(const std::string &option);
};

#endif //JM_MEETUP_FACTORYFLAG
