
#include <iostream>
#include "Option.h"

using namespace std;

COption::COption()
{
}

COption::~COption()
{
}

int COption::MainOptions() const
{
	int nOptions = 0;
	cout << "Student Application Main Menu" << endl;
	cout << "=====================================" << endl;
	cout << "1- Create Student Class" << endl;
	cout << "2- Create undergraduate student class" << endl;
	cout << "3- Create graduate class" << endl;
	cout << "4- Create Employee class" << endl;
	cout << "5- Create Course class" << endl;
	cout << "6- Print Student class" << endl;
	cout << "7- Print undergraduate class" << endl;
	cout << "8- Print graduate class" << endl;
	cout << "9- Print Employee class" << endl;
	cout << "10- Print course class" << endl;
	cout << "0- exit" << endl;
	cout << "=====================================" << endl;
	cout << "Please enter your choice or 0 to exit" << endl;
	cin >> nOptions;
	return nOptions;
}

int COption::StudentOptions() const
{
	int nOptions = 0;
	cout << "1.1- Create non parameterized constructor [1]" << endl;
	cout << "1.2- Create parameterized constructor [2]" << endl;
	cout << "1.3- return to main menu [3]" << endl;
	cin >> nOptions;
	return nOptions;
}

int COption::StudentOptions() const
{
}

void COption::CreateStudent()
{
}

void COption::PrintStudent() const
{
}

int COption::EmployeeOptions() const
{
}

void COption::CreateEmployee()
{
}

void COption::PrintEmployee() const
{
}

int COption::GraduateOptions() const
{
}

void COption::CreateGraduate()
{
}

void COption::PrintGraduate() const
{
}

int COption::UndergradeOptions() const
{
}

void COption::CreateUndergrade()
{
}

void COption::PrintUndergraduate() const
{
}

void COption::CreateCourse()
{
}

void COption::PrintCourse()
{
}
