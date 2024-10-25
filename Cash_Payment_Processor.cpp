#include "Cash_Payment_Processor.h"

bool Cash_Payment_Processor::process_payment(const double& amount, const Vehicle& vehicle)const
{
	std::cout << "Processing cash payment for vehicle: " << vehicle.get_vehicle_name() << std::endl;
	double charge_on_vehicle = vehicle.get_total_charge();
	if (amount == charge_on_vehicle)
	{
		return true;
	}
	return false;
}
