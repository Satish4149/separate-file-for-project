using namespace std;
#include<iostream>
#include "Employee.h"
#include<string.h>
Employee::Employee()
	{
		//		cout << "\nEmployeeloyee Default Constructor Called";
		this->id = 0;
		strcpy(this->name, "N/A");
		this->salary = 0;
	}
	Employee::Employee(int id, char *name, double salary)
	{
		//		cout << "\nEmployeeloyee Parameterised Constructor Called";
		this->id = id;
		this->salary = salary;
		strcpy(this->name, name);
	}

	//	Settors / Mutators
	void Employee::setid(int id)
	{
		this->id = id;
	}
	void Employee::setname(char *name)
	{
		strcpy(this->name, name);
	}
	void Employee::setsalary(double salary)
	{
		this->salary = salary;
	}

	//	Getters / Accessors
	int Employee::getid()
	{
		return this->id;
	}
	char* Employee::getname()
	{
		return this->name;
	}
	double Employee::getsalary()
	{
		return this->salary;
	}

	//	Normal Functions
	void Employee::display()
	{
		cout << "\nID:- " << this->id;
		cout << "\nName:- " << this->name;
		cout << "\nsalaryary:- " << this->salary;
	}

	double Employee::calculateSalary()
	{
		return this->salary;
	}
	
	
SalesManager::SalesManager(): Employee()
	{
		//		cout << "\nsalaryesManager Default Constructor Called";
//		this->id = 0;
//		strcpy(this->name, "N/A");
//		this->salary = 0;
		this->incentive = 0;
		this->target = 0;
	}
	// Parameterised Constructor
	SalesManager::SalesManager(int id, char *name, double salary, double incentive, int target) : Employee(id, name, salary) // Parameter Initalization List
	{
		//		cout << "\nsalaryesManager Parameterised Constructor Called";
		this->incentive = incentive;
		this->target = target;
	}
	//	Setters / Mutators
	void SalesManager::setincentive(double incentive)
	{
		this->incentive = incentive;
	}
	void SalesManager::settarget(double target)
	{
		this->target = target;
	}

	//	Getters / Accessors
	double SalesManager::getincentive()
	{
		return this->incentive;
	}
	int SalesManager::gettarget()
	{
		return this->target;
	}

	//	Normal Member Function
	void SalesManager::display()
	{
		Employee::display();
		cout << "\nIncentive:- " << this->incentive;
		cout << "\nTarget:- " << this->target;
	}
	double SalesManager::calculateSalary()
	{
		return this->getsalary() + this->incentive;
	}
	
	
Admin::Admin() : Employee()
	{
		//		cout << "\nAdmin Default Constructor Called";
		this->allowance = 0;
	}

	//	Parameterised Constructor
	Admin::Admin(int id, char *name, double salary, double allowance) : Employee(id, name, salary)
	{
		//		cout << "\nAdmin Parameterised Constructor Called";
		this->allowance = allowance;
	}

	//	Settors / Mutators
	void Admin::setallowance(double al)
	{
		this->allowance = al;
	}

	//	Getters / Accessors
	double Admin::getallowance()
	{
		return this->allowance;
	}

	//	Normal Functions
	void Admin::display()
	{
		Employee::display();
		cout << "\nAllowance:- " << this->allowance;
	}
	double Admin::calculateSalary()
	{
		return this->getsalary() + this->allowance;
	}
	
	
HR::HR() : Employee()
	{
		this->comission = 0;
	}
	// Parameterised Constructor
	HR::HR(int id, char *name, double salary, double comission) : Employee(id, name, salary)
	{
		this->comission = comission;
	}
	//	Setters / Mutators
	void HR::setcomission(double comission)
	{
		this->comission = comission;
	}

	//	Getters / Accessors
	double HR::getcomission()
	{
		return this->comission;
	}

	//	Normal Member Function
	void HR::display()
	{
		Employee::display();
		cout << "\nComission:- " << this->comission;
	}
	double HR::calculateSalary()
	{
		return this->getsalary() + this->comission;
	}