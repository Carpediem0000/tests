#include "Request.h"

Request::Request(string name, Employee* employee)
{
    setName(name);
    setEmployee(employee);
}

void Request::setName(string name)
{
    this->name = name;
}

void Request::setEmployee(Employee* employee)
{
    this->employee = employee;
}

string Request::getName() const
{
    return name;
}

Employee* Request::getEmployee() const
{
    return employee;
}

RequestSalary::RequestSalary(string name, Employee* employee, double salary)
    :Request(name, employee)

{
    setSalary(salary);
}

void RequestSalary::setSalary(double salary)
{
    this->salary = salary;
}

double RequestSalary::getSalary() const
{
    return salary;
}

string RequestSalary::type() const
{
    return "Request Salary";
}

RequestPosition::RequestPosition(string name, Employee* employee, string position)
    :Request(name, employee)
{
    setPosition(position);
}

void RequestPosition::setPosition(string position)
{
    this->position = position;
}

string RequestPosition::getPosition() const
{
    return position;
}

string RequestPosition::type() const
{
    return string();
}
