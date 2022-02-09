#include <iostream>
#include "strategy.h"
#include "person.h"


int main(){
    Person chris;
    BusTravel *bus = new BusTravel;
    chris.setTravelStrategy((TravelStrategy *)bus);
    chris.goTrip();

    AirplaneTravel *airplane = new AirplaneTravel;
    chris.setTravelStrategy((TravelStrategy *)airplane);
    chris.goTrip();

    return 0;
}
