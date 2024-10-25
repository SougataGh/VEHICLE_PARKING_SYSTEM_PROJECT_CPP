#include "Electric_Vehicle_Parking_Lot.h"

void Electric_Vehicle_Parking_Lot::park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index) 
{
    std::cout << "Parking EV at index : " << index << std::endl;
    Base_Parking_Lot::park_vehicle(vehicle, index);
    std::cout << "EV : " << vehicle->get_vehicle_name() << " Parked successfuly" << std::endl;
}

void Electric_Vehicle_Parking_Lot::charge_vehicle(const int& index) {
    if (index >= 0 && index < capacity && this->parked_vehicles[index]) {
        std::cout << "Charging vehicle at spot " << index << "." << std::endl;
    }
    else {
        std::cerr << "No electric vehicle at spot " << index << " to charge!" << std::endl;
    }
}
void Electric_Vehicle_Parking_Lot::remove_vehicle(const int& index)
{
    std::cout << "Removing EV : " << std::endl;
    Base_Parking_Lot::remove_vehicle(index);
}