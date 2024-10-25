#include "Show_Vacant_Places.h"
#include"Base_Parking_Lot.h"

void Show_Vacant_Places::display_vacant_places(const Base_Parking_Lot& base_parking_lot) const
{
    auto parked_vehicles = base_parking_lot.get_parked_vehicles();
    int capacity = base_parking_lot.get_capacity();
    std::cout << "Vacant places : " << std::endl;
    for (int i = 0; i < capacity; ++i) {
        if (!parked_vehicles[i]) {
            std::cout << "Spot " << i << ": Empty" << std::endl;
        }
    }
}
