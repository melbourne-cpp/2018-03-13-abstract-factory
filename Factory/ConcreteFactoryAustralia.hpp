#ifndef JM_MEETUP_CONCRETE_FACTORY_AUSTRALIA
#define JM_MEETUP_CONCRETE_FACTORY_AUSTRALIA

#include <memory>
#include "AbstractFactory.hpp"
#include "../ProductFlag/ProductFlagAustralia.hpp"
#include "../ProductMap/ProductMapAustralia.hpp"

class ConcreteFactoryAustralia : public AbstractFactory {
public:
    ~ConcreteFactoryAustralia();
    std::unique_ptr<AbstractProductFlag> createFlag() const;
    std::unique_ptr<AbstractProductMap>  createMap() const;
};

#endif //JM_MEETUP_CONCRETE_FACTORY_AUSTRALIA

