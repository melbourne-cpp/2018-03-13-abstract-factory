#ifndef JM_MEETUP_ABSTRACT_FACTORY_COUNTRY
#define JM_MEETUP_ABSTRACT_FACTORY_COUNTRY

class AbstractProductFlag;
class AbstractProductMap;

class AbstractFactory {
private:
public:
    virtual ~AbstractFactory() {}
    virtual std::unique_ptr<AbstractProductFlag> createFlag() = 0;
    virtual std::unique_ptr<AbstractProductMap>  createMap() = 0;
};

#endif //JM_MEETUP_ABSTRACT_FACTORY_COUNTRY
