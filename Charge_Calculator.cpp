#include "Charge_Calculator.h"

#include<iostream>

double Charge_Calculator::calculate_charge(const Vehicle& vehicle)
{
	double charge_per_min = vehicle.get_charge_per_min();
	double duration = vehicle.get_vehicle_duration();
	if (charge_per_min <= 0 || duration <= 0) {
		throw std::invalid_argument("Charge per minute and duration must be positive.");
	}
	double total_charge = (charge_per_min * duration);
	return total_charge;
}