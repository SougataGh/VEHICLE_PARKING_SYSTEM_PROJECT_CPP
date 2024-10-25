#include "Base_Parking_Lot.h"
#include"Show_All_Vehicles.h"
#include"Show_Vacant_Places.h"

#include<iostream>
#include<vector>
#include <stdexcept>
#include<memory>

int Base_Parking_Lot::get_capacity()const
{
	return this->capacity;
}
std::vector<std::shared_ptr<Vehicle>> Base_Parking_Lot::get_parked_vehicles()const
{
	return this->parked_vehicles;
}
void Base_Parking_Lot::park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index)
{
	if (index < 0 || index >= capacity) {
		throw std::out_of_range("Invalid parking spot index.");
	}
	if (parked_vehicles[index]) {
		throw std::runtime_error("Spot is already occupied!");
	}
	parked_vehicles[index] = std::move(vehicle);
	std::cout << "Vehicle parked at spot " << index << "." << std::endl;
}
void Base_Parking_Lot::remove_vehicle(const int& index)
{
	if (index < 0 || index >= capacity) {
		throw std::out_of_range("Invalid parking spot index.");
	}
	if (!parked_vehicles[index]) {
		throw std::runtime_error("No vehicle found at the specified index.");
	}
	parked_vehicles[index].reset();
	std::cout << "Vehicle removed from spot " << index << "." << std::endl;
}
void Base_Parking_Lot::display_parked_vehicles()const
{
	Show_All_Vehicles show_all_vehicles;
	show_all_vehicles.display_all_vehicles(*this);
}
void Base_Parking_Lot::display_vacant_places()const
{
	Show_Vacant_Places show_vacant_places;
	show_vacant_places.display_vacant_places(*this);
}