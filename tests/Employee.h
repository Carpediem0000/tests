#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Employee
{
protected:
	string name;
	string surname;
	string position;
	double salary;
	double bonus;
	//добавить дату
	bool status; //в отпуске или на работе
	int hour;

public:
	Employee(string name, string surname, string position, double salary,int hour);
	virtual ~Employee();

	void setName(string name);
	void setSurname(string surname);
	void setPosition(string position);
	void setSalary(double salary);
	void setBonus(double bonus);
	void changeStatus();
	void setHour(int hour);

	string getName()const;
	string  getSurname()const;
	string getPosition()const;
	double getSalary()const;
	double getBonus()const;
	bool getStatus()const;
	int getHour()const;

	virtual string type()const;

	virtual void show()const;

	virtual void save(FILE* file);
	




};

