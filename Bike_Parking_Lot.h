#pragma once
#include "Base_Parking_Lot.h"
#include"Parkable.h"
#include"Helmet_Storage.h"

class Bike_Parking_Lot :
    public Base_Parking_Lot,Parkable,Helmet_Storage
{
public:
    Bike_Parking_Lot(const int& lot_capacity) :Base_Parking_Lot(lot_capacity){}
    void Parkable::park_vehicle(std::shared_ptr<Vehicle> vehicle, const int& index)override;
    void Parkable::remove_vehicle(const int& index)override;
    void Helmet_Storage::store_helmet(const int& index)override;
};

