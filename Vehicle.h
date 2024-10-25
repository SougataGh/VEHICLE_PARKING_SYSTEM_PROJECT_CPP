#pragma once
#include <string>
#include "Time.h"

/// <summary>
/// Vehicle class is the parent/abstract class 
/// </summary>
class Vehicle {
    static int vehicle_counts; // Tracks the number of vehicles in the slot
protected:
    std::string vehicle_name;
    std::string number_plate;
    Time entry_time;
    Time exit_time;
    double charge_per_minute;

public:
    Vehicle(); // Default constructor
    Vehicle(const std::string& v_name, const std::string& n_plate, const double& charge, const Time& entry_t, const Time& exit_t); // Parameterized constructor

    virtual std::string get_vehicle_type() const = 0; // Pure virtual function for derived classes
    virtual std::string get_vehicle_name() const;
    virtual std::string get_plate_number() const;
    virtual double get_charge_per_min() const;
    virtual double get_vehicle_duration() const;
    virtual double get_total_charge() const;

    static int get_vehicle_counts(); // Static method to get vehicle count
    friend std::ostream& operator<<(std::ostream&, const Vehicle&);

    virtual ~Vehicle(); // Destructor
};

