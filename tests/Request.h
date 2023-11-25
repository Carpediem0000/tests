#pragma once
#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;
class Request
{
protected:
	string name;
	Employee* employee;
public:
	Request(string name, Employee* employee);

	void setName(string name);
	void setEmployee(Employee* employee);

	string getName()const;
	Employee* getEmployee()const;

	virtual string type()const = 0;
};
class RequestSalary
	:public Request
{
	double salary;
public:
	RequestSalary(string name, Employee* employee, double salary);

	void setSalary(double salary);
	double getSalary()const;

	string type()const override;

};

class RequestPosition
	:public Request
{
	string position;
public:
	RequestPosition(string name, Employee* employee, string position);

	void setPosition(string position);
	string getPosition()const;

	string type()const override;

};
