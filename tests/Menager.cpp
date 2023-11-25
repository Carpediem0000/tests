#include "Menager.h"

Menager::Menager(string name, string surname, double salary, int hour, string position = "Menager")
    :Employee(name, surname,position, salary, hour){}

Menager::~Menager()
{
    for (auto obj: employees)
    {
        delete obj;
    }
    employees.clear();
}

void Menager::addEmployee(Employee* obj)
{
    if (obj == nullptr)
    {
        return;
    }
    employees.push_back(obj);
}

void Menager::removeEmployee(int ind)
{
    if (ind >= 0 && ind < employees.size())
    {
        employees.erase(employees.begin() + ind);
    }
}

string Menager::type() const
{
    return "Menager";
}

void Menager::show() const
{
}
