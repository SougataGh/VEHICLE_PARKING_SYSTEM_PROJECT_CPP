#include "Bike_Parking_Lot.h"

void Bike_Parking_Lot::store_helmet(const int& index ) 
{
    if (index >= 0 && index < capacity && this->parked_vehicles[index]) {
        std::cout << "Helmet stored at spot " << index << "." << std::endl;
    }
    else {
        std::cerr << "No bike at spot " << index << " to store a helmet!" << std::endl;
    }
}
void Bike_Parking_Lot::park_vehicle(std::shared_ptr<Vehicle> vehicle,const int& index)
{
    std::cout << "Parking Bike at index : " << index << std::endl;
    Base_Parking_Lot::park_vehicle(vehicle, index);
    std::cout << "Bike : "<<vehicle->get_vehicle_name()<<" Parked successfuly" << std::endl;
}
void Bike_Parking_Lot::remove_vehicle(const int& index)
{
    std::cout << "Removing Bike : " << std::endl;
    Base_Parking_Lot::remove_vehicle(index);
}