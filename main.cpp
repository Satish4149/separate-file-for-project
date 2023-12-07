using namespace std;
#include<iostream>
#include "Employee.h"
#include<string.h>
int main()
{
	Employee *e1, e2(104, "Pavan", 35000);
	e1 = &e2;
	cout << "\n\nCall Function of Employee With Employee Class Pointer-Object\n";
	e1->display();
	cout << "\nCalculated Salary of Employee :- " << e1->calculateSalary();
	SalesManager *s1, s2(101, "sachin", 10000, 100, 20);
	e1 = &s2;
	cout << "\n\nCall Function of SalesManager With Employee Class Pointer-Object\n";
	e1->display();
	cout << "\nCalculated Salary of SalesManager :- " << e1->calculateSalary();
	Admin *a1, a2(200, "Rohit", 20000, 10000);
	e1 = &a2;
	cout << "\n\nCall Function With Admin With Employee Class Pointer-Object\n";
	e1->display();
	cout << "\nCalculated Salary of Admin :- " << e1->calculateSalary();
	HR *h1, h2(301, "Saurav", 22000, 20000);
	e1 = &h2;
	cout << "\n\nCall Function With HR With Employee Class Pointer-Object\n";
	e1->display();
	cout << "\nCalculated Salary of HR :- " << e1->calculateSalary();
}