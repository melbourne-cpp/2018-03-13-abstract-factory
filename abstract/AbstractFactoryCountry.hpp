#ifndef JM_MEETUP_ABSTRACT_FACTORY_COUNTRY
#define JM_MEETUP_ABSTRACT_FACTORY_COUNTRY

class AbstractFactoryCountry {
public:
    virtual ~AbstractFactoryCountry() {}
    virtual void show_flag() = 0;
    virtual void show_map() = 0;
};

#endif //JM_MEETUP_ABSTRACT_FACTORY_COUNTRY
