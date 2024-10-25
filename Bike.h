#pragma once
#include "Vehicle.h"
class Bike :
    public Vehicle
{
public:
    Bike(
        const std::string& v_name, const std::string& n_plate, const double& charge, const Time& entry_time, const Time& exit_time
    ) :Vehicle(v_name, n_plate, charge, entry_time, exit_time) {}
    std::string Vehicle::get_vehicle_type() const override;
};

