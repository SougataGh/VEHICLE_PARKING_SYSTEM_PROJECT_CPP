#include "Card_Payment_Processor.h"

bool Card_Payment_Processor::process_payment(const double& amount, const Vehicle& vehicle)const
{
    std::cout << "Processing card payment for vehicle: " << vehicle.get_plate_number() << std::endl;
    std::cout << "Amount: $" << amount << std::endl;
    // Logic to interact with payment gateway (omitted for simplicity)
    return true;  // Assume payment succeeds
}
