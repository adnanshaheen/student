#pragma once
#include "person.h"
class CEmployee : public CPerson
{
public:
	CEmployee();
	CEmployee(
		const unsigned int uID,
		const string csFirstName,
		const string csLastName,
		const string csSSN,
		const unsigned __int64 u64Salary);
	CEmployee(const CEmployee& cEmployee);
	virtual ~CEmployee();

	string GetSSN() const;
	void SetSSN(const string csSSN);

	unsigned __int64 GetSalary() const;
	void SetSalary(const __int64 u64Salary);

	CEmployee& operator = (const CEmployee& cEmployee);

private:
	string m_csSSN;
	unsigned __int64 m_u64Salary;
};
