#pragma once
#include<iostream>


class Chargeable
{
public:
	virtual void charge_vehicle(const int& index) = 0;
	virtual ~Chargeable() = default;
};

