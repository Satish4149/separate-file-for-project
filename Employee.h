using namespace std;
#include <iostream>
#include <string.h>
class Employee
{
	int id;
	char name[20];
	double salary;
	public:
	//	Default Constructor
	Employee();
	Employee(int, char*, double);

	//	Settors / Mutators
	void setid(int);
	void setname(char*);
	void setsalary(double);

	//	Getters / Accessors
	int getid();
	char *getname();
	double getsalary();

	//	Normal Functions
	virtual void display();

	virtual double calculateSalary();
}; // Employeeloyee Ends Here

class SalesManager : public Employee
{
	double incentive;
	int target;
	public:
	// Default Constructure
	SalesManager();
	// Parameterised Constructor
	SalesManager(int, char*, double, double, int); // Parameter Initalization List
	//	Setters / Mutators
	void setincentive(double);
	void settarget(double);

	//	Getters / Accessors
	double getincentive();
	int gettarget();

	//	Normal Member Function
	void display();
	double calculateSalary();
}; // salaryeceManager Ends Here

class Admin : public Employee
{
	double allowance;
	public:
	//	Default Constructor
	Admin();

	//	Parameterised Constructor
	Admin(int, char*, double, double);

	//	Settors / Mutators
	void setallowance(double);

	//	Getters / Accessors
	double getallowance();

	//	Normal Functions
	void display();
	double calculateSalary();
}; // Admin Ends Here

class HR : public Employee
{
	double comission;
	public:
	// Default Constructor
	HR();
	// Parameterised Constructor
	HR(int, char*, double, double);
	//	Setters / Mutators
	void setcomission(double);

	//	Getters / Accessors
	double getcomission();

	//	Normal Member Function
	void display();
	double calculateSalary();
}; // HR Ends Here
