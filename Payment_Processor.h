#pragma once

#include"Vehicle.h"

class Payment_Processor
{
public:
	virtual bool process_payment(const double& amount, const Vehicle& vehicle) const = 0;
	virtual ~Payment_Processor() = default;
};

