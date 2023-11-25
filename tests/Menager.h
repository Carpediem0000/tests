#pragma once
#include "Employee.h"
#include<vector>
class Menager :
    public Employee
{
protected:
    vector<Employee*> employees;

public:
    Menager(string name, string surname, double salary, int hour, string position = "Menager");
    ~Menager();

    void addEmployee(Employee* obj);
    void removeEmployee(int ind);

    string type()const override;
    void show()const override;
};

