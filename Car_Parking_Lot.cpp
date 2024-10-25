#include "Car_Parking_Lot.h"

void Car_Parking_Lot::park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index)
{
    std::cout << "Parking Car at index : " << index << std::endl;
    Base_Parking_Lot::park_vehicle(vehicle, index);
    std::cout << "Car : " << vehicle->get_vehicle_name() << " Parked successfuly" << std::endl;
}
void Car_Parking_Lot::remove_vehicle(const int& index)
{
    std::cout << "Removing Car : " << std::endl;
    Base_Parking_Lot::remove_vehicle(index);
}