#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Duration_Calculator.h"
#include "Charge_Calculator.h"
#include <stdexcept>

// Initialize static member
int Vehicle::vehicle_counts = 0;

// Default constructor
Vehicle::Vehicle() : vehicle_name(""), number_plate(""), charge_per_minute(0) {
    vehicle_counts++;
}

// Parameterized constructor with validation
Vehicle::Vehicle(const std::string& v_name, const std::string& n_plate, const double& charge, const Time& entry_t, const Time& exit_t)
    : vehicle_name(v_name), number_plate(n_plate), entry_time(entry_t), exit_time(exit_t), charge_per_minute(charge) {
    if (charge < 0) {
        throw std::invalid_argument("Charge per minute cannot be negative.");
    }
    vehicle_counts++;
}

std::string Vehicle::get_plate_number() const {
    return this->number_plate;
}

std::string Vehicle::get_vehicle_name() const {
    return this->vehicle_name;
}

int Vehicle::get_vehicle_counts() {
    return vehicle_counts;
}

double Vehicle::get_charge_per_min() const {
    return this->charge_per_minute;
}

double Vehicle::get_vehicle_duration() const {
    Duration_Calculator duration_calculator;
    double duration = duration_calculator.calculate_duration(entry_time, exit_time);
    return duration;
}

double Vehicle::get_total_charge() const {
    Charge_Calculator charge_calculator;
    double total_charge = charge_calculator.calculate_charge(*this);
    return total_charge;
}

std::ostream& operator<<(std::ostream& cout, const Vehicle& vehicle) {
    cout << "VEHICLE TYPE : " << vehicle.get_vehicle_type() << std::endl;
    cout << "VEHICLE NAME : " << vehicle.vehicle_name << std::endl;
    cout << "VEHICLE'S PLATE_NUMBER : " << vehicle.number_plate << std::endl;
    cout << "VEHICLE'S STAYING DURATION : " << vehicle.get_vehicle_duration() << std::endl;
    cout << "TOTAL CHARGE ON THE VEHICLE : " << vehicle.get_total_charge() << std::endl;
    return cout;
}

Vehicle::~Vehicle() {
    vehicle_counts--; // Decrement the count when a vehicle is destroyed
}
