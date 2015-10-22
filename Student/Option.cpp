
#include <iostream>
#include "Option.h"
#include "Student.h"
#include "Employee.h"
#include "Graduate.h"
#include "Undergraduate.h"
#include "Course.h"

using namespace std;

COption::COption()
{
	m_pStudent = NULL;
	m_pEmployee = NULL;
	m_pUndergrade = NULL;
	m_pGraduate = NULL;
	m_pCourse = NULL;
}

COption::~COption()
{
	DeleteStudent();
	DeleteEmployee();
	DeleteGraduate();
	DeleteUndergrade();
	DeleteCourse();
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

void COption::CreateStudent(bool bParam/* = false*/)
{
	if (!m_pStudent) {
		if (!bParam)
			m_pStudent = new CStudent();

		string csFirstName;
		string csLastName;
		int nID = 0;
		int nTest1;
		int nTest2;

		cout << "Please enter First name: ";
		cin >> csFirstName;
		cout << "Please enter Last name: ";
		cin >> csLastName;
		cout << "Please enter ID: ";
		cin >> nID;
		cout << "Please enter 1st Test score: ";
		cin >> nTest1;
		cout << "Please enter 2nd Test score: ";
		cin >> nTest2;

		if (bParam)
			m_pStudent = new CStudent(nID, csFirstName, csLastName, nTest1, nTest2);
		else if (m_pStudent) {
			m_pStudent->SetID(nID);
			m_pStudent->SetFirstName(csFirstName);
			m_pStudent->SetLastName(csLastName);
			m_pStudent->SetTest1(nTest1);
			m_pStudent->SetTest2(nTest2);
		}

		AddCourses();
	}
}

void COption::AddCourses()
{
	char cYesNo = 'N';

	do {
		cout << "Add " << ((cYesNo == 'Yes') ? "another " : "") << "course? (Y|N)." << endl;
		cin >> cYesNo;

		if (cYesNo == 'Y' || cYesNo == 'y') {
			CCourse cCourse;
			string csName;
			string csID;
			int nCredit = 0;

			cout << "Please enter course ID: ";
			cin >> csID;
			cout << "Please enter course name: ";
			cin >> csName;
			cout << "Please enter course credit hours: ";
			cin >> nCredit;

			cCourse.SetID(csID);
			cCourse.SetName(csName);
			cCourse.SetCredit(nCredit);
		}
	} while (cYesNo == 'Y');
}

void COption::PrintStudent() const
{
	if (m_pStudent)
		m_pStudent->Print();
	else
		cout << "!! Sorry ... The student object is created yet ....." << endl;
}

void COption::DeleteStudent()
{
	if (m_pStudent) {
		delete m_pStudent;
		m_pStudent = NULL;
	}
}

int COption::EmployeeOptions() const
{
	int nOptions = 0;
	cout << "1.1- Create non parameterized constructor [1]" << endl;
	cout << "1.2- Create parameterized constructor [2]" << endl;
	cout << "1.3- return to main menu [3]" << endl;
	cin >> nOptions;
	return nOptions;
}

void COption::CreateEmployee(bool bParam/* = false*/)
{
	if (!m_pEmployee) {
		if (!bParam)
			m_pStudent = new CStudent();

		int nID = 0;
		string csFirstName;
		string csLastName;
		string csSSN;
		unsigned __int64 u64Salary = 0;

		cout << "Please enter First name: ";
		cin >> csFirstName;
		cout << "Please enter Last name: ";
		cin >> csLastName;
		cout << "Please enter ID: ";
		cin >> nID;
		cout << "Please enter SSN: ";
		cin >> csSSN;
		cout << "Please enter Salary: ";
		cin >> u64Salary;

		if (bParam)
			m_pEmployee = new CEmployee(nID, csFirstName, csLastName, csSSN, u64Salary);
		else if (m_pEmployee) {
			m_pEmployee->SetID(nID);
			m_pEmployee->SetFirstName(csFirstName);
			m_pEmployee->SetLastName(csLastName);
			m_pEmployee->SetSSN(csSSN);
			m_pEmployee->SetSalary(u64Salary);
		}
	}
}

void COption::PrintEmployee() const
{
	if (m_pEmployee)
		m_pEmployee->Print();
	else
		cout << "!! Sorry ... The employee object is not created yet ....." << endl;
}

void COption::DeleteEmployee()
{
	if (m_pEmployee) {
		delete m_pEmployee;
		m_pEmployee = NULL;
	}
}

int COption::GraduateOptions() const
{
	int nOptions = 0;
	cout << "1.1- Create non parameterized constructor [1]" << endl;
	cout << "1.2- Create parameterized constructor [2]" << endl;
	cout << "1.3- return to main menu [3]" << endl;
	cin >> nOptions;
	return nOptions;
}

void COption::CreateGraduate(bool bParam/* = false*/)
{
	if (!m_pGraduate) {
		if (!bParam)
			m_pGraduate = new CGraduate();

		string csFirstName;
		string csLastName;
		int nID = 0;
		int nTest1;
		int nTest2;

		cout << "Please enter First name: ";
		cin >> csFirstName;
		cout << "Please enter Last name: ";
		cin >> csLastName;
		cout << "Please enter ID: ";
		cin >> nID;
		cout << "Please enter 1st Test score: ";
		cin >> nTest1;
		cout << "Please enter 2nd Test score: ";
		cin >> nTest2;

		if (bParam)
			m_pGraduate = new CGraduate(nID, csFirstName, csLastName, nTest1, nTest2);
		else if (m_pGraduate) {
			m_pGraduate->SetID(nID);
			m_pGraduate->SetFirstName(csFirstName);
			m_pGraduate->SetLastName(csLastName);
			m_pGraduate->SetTest1(nTest1);
			m_pGraduate->SetTest2(nTest2);
		}

		AddCourses();
	}
}

void COption::PrintGraduate() const
{
	if (m_pGraduate)
		m_pGraduate->Print();
	else
		cout << "!! Sorry ... The Grduate Student object is not created yet ....." << endl;
}

void COption::DeleteGraduate()
{
	if (m_pGraduate) {
		delete m_pGraduate;
		m_pGraduate = NULL;
	}
}

int COption::UndergradeOptions() const
{
	int nOptions = 0;
	cout << "1.1- Create non parameterized constructor [1]" << endl;
	cout << "1.2- Create parameterized constructor [2]" << endl;
	cout << "1.3- return to main menu [3]" << endl;
	cin >> nOptions;
	return nOptions;
}

void COption::CreateUndergrade(bool bParam/* = false*/)
{
	if (!m_pUndergrade) {
		if (!bParam)
			m_pUndergrade = new CUndergraduate();

		string csFirstName;
		string csLastName;
		int nID = 0;
		int nTest1;
		int nTest2;

		cout << "Please enter First name: ";
		cin >> csFirstName;
		cout << "Please enter Last name: ";
		cin >> csLastName;
		cout << "Please enter ID: ";
		cin >> nID;
		cout << "Please enter 1st Test score: ";
		cin >> nTest1;
		cout << "Please enter 2nd Test score: ";
		cin >> nTest2;

		if (bParam)
			m_pUndergrade = new CUndergraduate(nID, csFirstName, csLastName, nTest1, nTest2);
		else if (m_pUndergrade) {
			m_pUndergrade->SetID(nID);
			m_pUndergrade->SetFirstName(csFirstName);
			m_pUndergrade->SetLastName(csLastName);
			m_pUndergrade->SetTest1(nTest1);
			m_pUndergrade->SetTest2(nTest2);
		}

		AddCourses();
	}
}

void COption::PrintUndergrade() const
{
	if (m_pUndergrade)
		m_pUndergrade->Print();
	else
		cout << "!! Sorry ... The Undergrduate Student object is not created yet ....." << endl;
}

void COption::DeleteUndergrade()
{
	if (m_pUndergrade) {
		delete m_pUndergrade;
		m_pUndergrade = NULL;
	}
}

int COption::CourseOptions() const
{
	int nOptions = 0;
	cout << "1.1- Create non parameterized constructor [1]" << endl;
	cout << "1.2- Create parameterized constructor [2]" << endl;
	cout << "1.3- return to main menu [3]" << endl;
	cin >> nOptions;
	return nOptions;
}

void COption::CreateCourse(bool bParam/* = false*/)
{
	if (!m_pCourse) {
		if (!bParam)
			m_pCourse = new CCourse();

		string csName;
		string csID;
		int nCredit = 0;

		cout << "Please enter course ID: ";
		cin >> csID;
		cout << "Please enter course name: ";
		cin >> csName;
		cout << "Please enter course credit hours: ";
		cin >> nCredit;

		if (bParam)
			m_pCourse = new CCourse(csID, csName, nCredit);
		else if (m_pUndergrade) {
			m_pCourse->SetID(csID);
			m_pCourse->SetName(csName);
			m_pCourse->SetCredit(nCredit);
		}
	}
}

void COption::PrintCourse()
{
	if (m_pCourse)
		m_pCourse->Print();
	else
		cout << "!! Sorry ... The Course object is not created yet ....." << endl;
}

void COption::DeleteCourse()
{
	if (m_pCourse) {
		delete m_pCourse;
		m_pCourse = NULL;
	}
}