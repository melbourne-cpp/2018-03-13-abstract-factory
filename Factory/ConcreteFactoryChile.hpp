#ifndef JM_MEETUP_CONCRETE_FACTORY_CHILE
#define JM_MEETUP_CONCRETE_FACTORY_CHILE

#include <memory>
#include "AbstractFactory.hpp"
#include "../ProductFlag/ProductFlagChile.hpp"
#include "../ProductMap/ProductMapChile.hpp"

class ConcreteFactoryChile: public AbstractFactory {
public:
    ~ConcreteFactoryChile();
    std::unique_ptr<AbstractProductFlag> createFlag() const;
    std::unique_ptr<AbstractProductMap>  createMap() const;
};

#endif //JM_MEETUP_CONCRETE_FACTORY_CHILE

