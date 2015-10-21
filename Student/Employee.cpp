
#include "Employee.h"

CEmployee::CEmployee() : CPerson(), m_u64Salary(0)
{
}

CEmployee::CEmployee(
	const unsigned int uID,
	const string csFirstName,
	const string csLastName,
	const string csSSN,
	const unsigned __int64 u64Salary) : CPerson(uID, csFirstName, csLastName)
{
	m_csSSN = csSSN;
	m_u64Salary = u64Salary;
}

CEmployee::CEmployee(const CEmployee& cEmployee) : CPerson(cEmployee)
{
	SetSSN(cEmployee.GetSSN());
	SetSalary(cEmployee.GetSalary());
}

CEmployee::~CEmployee()
{
}

string CEmployee::GetSSN() const
{
	return m_csSSN;
}

void CEmployee::SetSSN(const string csSSN)
{
	m_csSSN = csSSN;
}

unsigned __int64 CEmployee::GetSalary() const
{
	return m_u64Salary;
}

void CEmployee::SetSalary(const __int64 u64Salary)
{
	m_u64Salary = u64Salary;
}

CEmployee& CEmployee::operator = (const CEmployee& cEmployee)
{
	if (this != &cEmployee) {
		CPerson::operator = (cEmployee);

		SetSSN(cEmployee.GetSSN());
		SetSalary(cEmployee.GetSalary());
	}

	return *this;
}
