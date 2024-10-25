#pragma once
#include<iostream>
#include<memory>
#include<vector>

#include"Vehicle.h"

class Base_Parking_Lot
{
protected:
	std::vector<std::shared_ptr<Vehicle>> parked_vehicles;
	int capacity;
public:
	Base_Parking_Lot(const int &lot_capacity):capacity(lot_capacity),parked_vehicles(lot_capacity,nullptr){}
	virtual int get_capacity()const;
	virtual std::vector<std::shared_ptr<Vehicle>> get_parked_vehicles()const;
	virtual void display_parked_vehicles()const;
	virtual void park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index);
	virtual void remove_vehicle(const int& index);
	virtual void display_vacant_places()const;
	virtual ~Base_Parking_Lot() = default;
};

