#pragma once
#include "Menager.h"
class Division
{
	Employee* menager;
	string name;

public:
	Division(string name, Employee* menager);
	~Division();

	void setName(string name);
	string getName()const;

	void setMenager(Employee* menager);
	Employee* getMenager()const;

	void show()const;
};

