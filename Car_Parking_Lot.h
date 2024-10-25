#pragma once
#include"Base_Parking_Lot.h"
#include"Parkable.h"

class Car_Parking_Lot :
    public Base_Parking_Lot,Parkable
{
public:
    Car_Parking_Lot(const int& lot_capacity):Base_Parking_Lot(lot_capacity){}
    void Parkable::park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index)override;
    void Parkable::remove_vehicle(const int& index)override;
};

