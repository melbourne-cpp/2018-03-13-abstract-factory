#ifndef JM_MEETUP_CHILEFACTORY
#define JM_MEETUP_CHILEFACTORY

#include <memory>
#include "AbstractFactoryCountry.hpp"

class Map;
class Flag;

class ChileFactory : public AbstractFactoryCountry {
private:
    std::unique_ptr<Flag> factory_flag;
    std::unique_ptr<Map>  factory_map;
public:
    ChileFactory();
    ~ChileFactory();
    void show_flag();
    void show_map();
};

#endif //JM_MEETUP_CHILEFACTORY

