#pragma once
#include "Payment_Processor.h"
class Cash_Payment_Processor :
    public Payment_Processor
{
public:
    bool process_payment(const double& amount, const Vehicle& vehicle) const override;
};

