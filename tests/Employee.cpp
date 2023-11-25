#include "Employee.h"

Employee::Employee(string name, string surname, string position, double salary, int hour)
{
	setName(name);
	setSurname(surname);
	setPosition(position);
	setSalary(salary);
	setHour(hour);
	this->status = true;
}

Employee::~Employee()
{
}

void Employee::setName(string name)
{
	this->name = name;
}

void Employee::setSurname(string surname)
{
	this->surname = surname;
}

void Employee::setPosition(string position)
{
	this->position = position;
}

void Employee::setSalary(double salary)
{
	this->salary = salary;
}

void Employee::changeStatus()
{
	if (status)
		this->status = false;
	else
		this->status = true;
}

void Employee::setHour(int hour)
{
	this->hour = hour;
}

string Employee::getName() const
{
	return name;
}

string Employee::getSurname() const
{
	return surname;
}

string Employee::getPosition() const
{
	return position;
}

double Employee::getSalary() const
{
	return salary;
}

bool Employee::getStatus() const
{
	return status;
}

int Employee::getHour() const
{
	return hour;
}

string Employee::type() const
{
	return "Employee";
}

#define RESET_COLOR "\033[0m"
#define RED_COLOR "\u001b[31m"
#define GREEN_COLOR "\u001b[32m"

void Employee::show() const
{
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Position: " << position << endl;
	cout << "Hour: " << hour << endl;
	cout << "Salary: " << salary << "uah" << endl;
	cout << "Status: ";
	if (status)
	{
		cout << GREEN_COLOR << "work" << RESET_COLOR << endl;
	}
	else
	{
		cout << RED_COLOR << "weekend" << RESET_COLOR << endl;
	}
}
