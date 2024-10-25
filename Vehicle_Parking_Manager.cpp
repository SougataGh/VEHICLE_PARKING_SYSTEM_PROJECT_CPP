#include "Vehicle_Parking_Manager.h"
#include"Time.h"
#include"Car.h"
#include"Cash_Payment_Processor.h"

#include<iostream>
#include<string>

void Vehicle_Parking_Manager::show_lot_capacity()const
{
	std::cout << "Your Lot Capacity : " << this->car_parking_lot.get_capacity() << std::endl;
}
void Vehicle_Parking_Manager::get_and_park_vehicle()
{
	std::string name, plate_number;
	std::cout << "ENTER THE NAME OF THE CAR: ";
	//clear_input_buffer();  // Clear the input buffer to prevent getline issues
	std::getline(std::cin, name);
	std::cout << "ENTER THE PLATE NUMBER OF THE CAR: ";
	std::getline(std::cin, plate_number);
	std::cout << "ENTER THE ENTRY TIME OF THE CAR (HRS:MINS:SECS) FORMAT : ";
	int hrs, mins, secs;
	std::cin >> hrs >> mins >> secs;
	Time entry_time(hrs, mins, secs);
	std::cout << "ENTER THE EXIT TIME OF THE CAR (HRS:MINS:SECS) FORMAT : ";
	std::cin >> hrs >> mins >> secs;
	Time exit_time(hrs, mins, secs);
	std::cout << "ENTER CHARGE-PER-MIN TO BE APPLIED ON THE CAR  : ";
	double charge_per_min;
	std::cin >> charge_per_min;
	auto car_ptr = std::make_shared<Car>(name, plate_number, charge_per_min, entry_time, exit_time);
	std::cout << "ENTER THE INDEX WHERE YOU WANT TO ENTER THE CAR : " << std::endl;
	int index; std::cin >> index;
	this->car_parking_lot.park_vehicle(car_ptr, index);
}
void Vehicle_Parking_Manager::get_and_unpark_vehicle()
{
	std::cout << "ENTER THE INDEX : " << std::endl;
	int ind; std::cin >> ind;
	auto parked_vehicles = this->car_parking_lot.get_parked_vehicles();
	if (parked_vehicles[ind] == nullptr)
	{
		std::cout << "VEHICLE DOESN'T EXIST" << std::endl;
		return;
	}
	std::cout << "FIRST CHECKING IF PAYMENT IS BEING PROCESSED SUCESSFULY.....OR NOT......." << std::endl;
	std::cout << "ENTER THE AMOUNT TAKEN FROM THE OWNER : ";
	double amount; std::cin >> amount;
	Cash_Payment_Processor cash_payment_processor;
	//auto car = (*(parked_vehicles[ind]));
	if (cash_payment_processor.process_payment(amount, *(parked_vehicles[ind])) == false)
	{
		std::cout<<"INCOMPLETE AMOUNT GIVEN" << std::endl;
		return;
	}
	this->car_parking_lot.remove_vehicle(ind);
}
void Vehicle_Parking_Manager::show_all_vehicles()const
{
	std::cout << "HERE IS LIST OF ALL VEHICLES IN YOUR PARKING LOT : " << std::endl;
	this->car_parking_lot.display_parked_vehicles();
}
void Vehicle_Parking_Manager::show_not_ocuupied_places()const
{
	std::cout << "HERE IS LIST OF ALL UNOCCUPIED PLACES IN YOUR PARKING LOT : " << std::endl;
	this->car_parking_lot.display_vacant_places();
}
void Vehicle_Parking_Manager::clear_input_buffer() const {
	std::cin.clear(); // Clear any error flags
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard the rest of the line
}