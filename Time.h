#pragma once

#include <iostream>

class Time {
private:
    int hrs, mins, secs;

public:
    // Default constructor
    Time() : hrs(0), mins(0), secs(0) {}

    // Parameterized constructor with validation
    Time(const int& h, const int& m, const int& s);

    // Getter methods
    int get_hours() const;
    int get_mins() const;
    int get_secs() const;

private:
    // Declaration of helper function to validate time values
    bool is_valid_time(const int& h, const int& m, const int& s) const;
};


