#include "Show_All_Vehicles.h"
#include"Base_Parking_Lot.h"

#include<iostream>

void Show_All_Vehicles::display_all_vehicles(const Base_Parking_Lot& base_parking_lot)
{
	auto parked_vehicles = base_parking_lot.get_parked_vehicles();
	int capacity = base_parking_lot.get_capacity();
    for (int i = 0; i < capacity; ++i) {
        if (parked_vehicles[i]) {
            std::cout << "Spot " << i << ": ";
            std::cout << *(parked_vehicles[i]) << std::endl;
        }
        else {
            std::cout << "Spot " << i << ": Empty" << std::endl;
        }
    }
}