#include "Employee.h"
#include "Company.h"
int main()
{
	/*Employee a("Vanya", "sdf", "it", 5000, 8);
	a.show();*/

	Company a(new Director("Ivan", "Ivanov", 20000, 8));
	/*a.addEmployee(new Employee("Vasya", "Puplin", "hdsksdj", 10000, 8));*/
	a.load();
	a.show();
}