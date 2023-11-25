#include "Director.h"

Director::Director(string name, string surname, double salary, int hour, string position = "Director")
    :Employee(name, surname, position, salary, hour){}

Director::~Director()
{
    for (auto obj : menager)
    {
        delete obj;
    }
    menager.clear();
}

void Director::addMenager(Employee* obj)
{
    if (obj == nullptr)
    {
        return;
    }
    menager.push_back(obj);
}

void Director::removeMenager(int ind)
{
    if (ind >= 0 && ind < menager.size())
    {
        menager.erase(menager.begin() + ind);
    }
}

string Director::type() const
{
    return "Director";
}

void Director::show() const
{
}
