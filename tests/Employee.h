#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
	string name;
	string surname;
	string position;
	double salary;
	//добавить дату
	bool status; //в отпуске или на работе
	int hour;

public:
	Employee(string name, string surname, string position, double salary, bool status,int hour);
	virtual ~Employee()=0;

	void setName(string name);
	void setSurname(string surname);
	void setPosition(string position);
	void setSalary(double salary);
	void changeStatus();
	void setHour(int hour);

	string getName()const;
	string  getSurname()const;
	string getPosition()const;
	double getSalary()const;
	bool getStatus()const;
	int getHour()const;

	virtual string type()const;

	virtual void show()const;




};

