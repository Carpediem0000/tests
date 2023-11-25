#pragma once
#include "Division.h"
#include "Director.h"
class Company
{
	Employee* director;
	vector <Division*>division;
	vector <Employee*>employee;
public:

	Company(Employee* director);
	~Company();

	void setDirector(Employee* director);
	Employee* getDirector()const;

	void addDivision(Division* obj);
	void removeDivision(int ind);

	void addEmployee(Employee* obj);
	void removeEmployee(int ind);

	void show()const;

	void save();
	void load();
};

