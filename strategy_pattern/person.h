#ifndef _PERSON_H
#define _PERSON_H
#include "strategy.h"

class Person{
  private:
    ITravelStrategy *m_travel_strategy;
  public:
    void setTravelStrategy(TravelStrategy *strategy){
      m_travel_strategy->m_strategy = strategy;
    }
    void goTrip(){
      m_travel_strategy->goTravel();
    }

};


#endif

