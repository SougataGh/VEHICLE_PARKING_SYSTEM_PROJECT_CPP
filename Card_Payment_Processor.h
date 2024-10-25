#pragma once
#include "Payment_Processor.h"
class Card_Payment_Processor :
    public Payment_Processor
{
    bool process_payment(const double& amount, const Vehicle& vehicle) const override;
};

