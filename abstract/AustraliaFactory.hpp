#ifndef JM_MEETUP_AUSTRALIAFACTORY
#define JM_MEETUP_AUSTRALIAFACTORY

#include <memory>
#include "AbstractFactoryCountry.hpp"

class Map;
class Flag;

class AustraliaFactory : public AbstractFactoryCountry {
private:
    std::unique_ptr<Flag> factory_flag;
    std::unique_ptr<Map>  factory_map;
public:
    AustraliaFactory();
    ~AustraliaFactory();
    void show_flag();
    void show_map();
};

#endif //JM_MEETUP_AUSTRALIAFACTORY

