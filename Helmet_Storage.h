#pragma once
#include<iostream>


class Helmet_Storage
{
public:
	virtual void store_helmet(const int& index) = 0;
	virtual ~Helmet_Storage() = default;
};

