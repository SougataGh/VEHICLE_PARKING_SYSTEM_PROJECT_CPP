#pragma once
#include<iostream>
#include<memory>


#include"Vehicle.h"

class Parkable
{
public:
	virtual void park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index) = 0;
	virtual void remove_vehicle(const int& index) = 0;
	//virtual void displayParkedVehicles() const = 0;
	virtual ~Parkable() = default;
};

