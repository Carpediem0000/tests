#include "Division.h"

Division::Division(string name, Employee* menager)
{
    setName(name);
    setMenager(menager);
}

Division::~Division()
{
    if (menager != nullptr)
    {
        delete menager;
    }
}

void Division::setName(string name)
{
    this->name = name;
}

string Division::getName() const
{
    return name;
}

void Division::setMenager(Employee* menager)
{
    this->menager = menager;
}

Employee* Division::getMenager() const
{
    return menager;
}

void Division::show() const
{
}
