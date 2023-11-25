#include "Company.h"

Company::Company(Employee* director)
{
	setDirector(director);
}

Company::~Company()
{
	if (director != nullptr )
	{
		delete director;
	}
	for (auto obj: division)
	{
		delete obj;
	}
	for (auto obj : employee)
	{
		delete obj;
	}
	division.clear();
	employee.clear();
}

void Company::setDirector(Employee* director)
{
	this->director = director;
}

Employee* Company::getDirector() const
{
	return director;
}

void Company::addDivision(Division* obj)
{
	if (obj == nullptr)
	{
		return;
	}
	division.push_back(obj);
}

void Company::removeDivision(int ind)
{
	if (ind >= 0 && ind < division.size())
	{
		division.erase(division.begin() + ind);
	}
}

void Company::addEmployee(Employee* obj)
{
	if (obj == nullptr)
	{
		return;
	}
	employee.push_back(obj);
}

void Company::removeEmployee(int ind)
{

	if (ind >= 0 && ind < division.size())
	{
		employee.erase(employee.begin() + ind);
	}
}

void Company::show() const
{}

void Company::save()
{
	FILE* file = nullptr;
	fopen_s(&file, "test_1.bin", "wb");
	if (file =NULL)
	{
		return;
	}
	else
	{
		for (int i = 0; i < employee.size(); i++)
		{
			employee[i]->save(file);
		}
	}
	fclose(file);
}

void Company::load()
{
	FILE* file = nullptr;
	fopen_s(&file, "test_1.bin", "rb");
	if (file = NULL)
	{
		return;
	}
	else
	{
		while (!feof(file))
		{
			Employee* obj;
			fread(obj, sizeof(Employee), 1, file);
			addEmployee(obj);
		}
	}
	fclose(file);

}

