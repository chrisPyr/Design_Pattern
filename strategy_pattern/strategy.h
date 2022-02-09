#ifndef _STRATEGY_H
#define _STRATEGY_H
#include <iostream>

//Forward declaration
class TravelStrategy;
class AirplaneTravel;
class BusTravel;

class TravelStrategy{
  public:
    virtual void Travel() = 0;

};

class ITravelStrategy{
  public:
    TravelStrategy *m_strategy;
    void goTravel(){
        m_strategy->Travel();
    };
};

class AirplaneTravel: public TravelStrategy{
  public:
    void Travel() override{
      std::cout<<"Travel with airplane\n";
    }
};

class BusTravel: public TravelStrategy{
  public:
    void Travel() override{
      std::cout<<"Travel with bus\n";
    }
};


#endif
