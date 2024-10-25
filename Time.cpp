#include "Time.h"
#include <iostream>
#include <stdexcept> // For exception handling

// Getter methods implementation
Time::Time(const int& h, const int& m, const int& s) {
    if (!is_valid_time(h, m, s)) {
        throw std::invalid_argument("Invalid time values.");
    }
    hrs = h;
    mins = m;
    secs = s;
}
int Time::get_hours() const {
    return this->hrs;
}

int Time::get_mins() const {
    return this->mins;
}

int Time::get_secs() const {
    return this->secs;
}

// Definition of the validation function
bool Time::is_valid_time(const int& h, const int& m, const int& s) const {
    return (h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60);
}
