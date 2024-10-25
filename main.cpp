// Vehicle_Praking_System_Proj(Dummy).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<memory>
#include"Vehicle.h"
#include"Car.h"
#include"Base_Parking_Lot.h"
#include"Car.h"
#include"Car_Parking_Lot.h"
#include"Time.h"
#include"Vehicle_Parking_Manager.h"

void clear_input_buffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
}


int main()
{
    int lot_capacity;
    std::cout << "Enter the parking lot capacity: ";
    std::cin >> lot_capacity;

    Vehicle_Parking_Manager vehicle_parking_manager(lot_capacity);

    while (true) {
        std::cout << "\n--- Vehicle Parking Management System ---\n";
        std::cout << "1. Show Lot Capacity\n";
        std::cout << "2. Park a Vehicle\n";
        std::cout << "3. Unpark a Vehicle\n";
        std::cout << "4. Show All Vehicles\n";
        std::cout << "5. Show Vacant Places\n";
        std::cout << "6. Exit\n";
        std::cout << "Choose an option (1-6): ";
        int choice;
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cin.ignore();
            vehicle_parking_manager.show_lot_capacity();
            break;
        case 2:
            std::cin.ignore();
            vehicle_parking_manager.get_and_park_vehicle();
            break;
        case 3:
            std::cin.ignore();
            vehicle_parking_manager.get_and_unpark_vehicle();
            break;
        case 4:
            std::cin.ignore();
            vehicle_parking_manager.show_all_vehicles();
            break;
        case 5:
            std::cin.ignore();
            vehicle_parking_manager.show_not_ocuupied_places();
            break;
        case 6:
            std::cout << "Exiting the program...\n";
            return 0;
        default:
            std::cout << "Invalid choice! Please try again.\n";
            break;
        }

        // Clear input buffer after every operation
        //clear_input_buffer();
        //system("cls");
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
