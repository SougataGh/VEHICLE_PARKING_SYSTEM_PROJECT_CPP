#include "Duration_Calculator.h"
#include"Time.h"
#include<iostream>

double Duration_Calculator::calculate_duration(const Time& entry_time, const Time& exit_time)
{
    // Entry time
    int hrs_entry = entry_time.get_hours();
    int mins_entry = entry_time.get_mins();
    int secs_entry = entry_time.get_secs();

    // Exit time
    int hrs_exit = exit_time.get_hours();
    int mins_exit = exit_time.get_mins();  
    int secs_exit = exit_time.get_secs();  

    // Convert entry time to seconds
    int entry_in_seconds = hrs_entry * 3600 + mins_entry * 60 + secs_entry;

    // Convert exit time to seconds
    int exit_in_seconds = hrs_exit * 3600 + mins_exit * 60 + secs_exit;

    // Validate that exit time is after entry time
    if (exit_in_seconds < entry_in_seconds) {
        throw std::invalid_argument("Exit time must be after entry time.");
    }

    // Calculate the duration in seconds
    int duration_seconds = exit_in_seconds - entry_in_seconds;

    // Convert duration to minutes
    double duration_minutes = duration_seconds / 60.0;

    return duration_minutes;
}