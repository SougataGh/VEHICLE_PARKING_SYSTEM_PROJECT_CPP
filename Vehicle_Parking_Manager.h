#pragma once

#include"Car_Parking_Lot.h"
#include"Bike_Parking_Lot.h"
#include"Electric_Vehicle_Parking_Lot.h"

class Vehicle_Parking_Manager
{
	Car_Parking_Lot car_parking_lot;
public:
	Vehicle_Parking_Manager(const int& capacity):car_parking_lot(capacity){}
	void show_lot_capacity()const;
	void get_and_park_vehicle();
	void get_and_unpark_vehicle();
	void show_all_vehicles()const;
	void show_not_ocuupied_places()const;
private:
	void clear_input_buffer() const;
};

