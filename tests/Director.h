#pragma once
#include "Employee.h"
#include <vector>
class Director :
    public Employee
{
    vector<Employee*> menager;
public:
    Director();
    Director(string name, string surname, double salary, int hour, string position= "Director");
    ~Director();

    void addMenager(Employee* obj);
    void removeMenager(int ind);

    string type()const override;
    void show()const override;
};

