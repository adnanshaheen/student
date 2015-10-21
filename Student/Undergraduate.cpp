
#include "Undergraduate.h"

CUndergraduate::CUndergraduate() : CStudent()
{
}

CUndergraduate::CUndergraduate(
	const unsigned int uID,
	const string csFirstName,
	const string csLastName,
	const unsigned int nTest1,
	const unsigned int nTest2) : CStudent(uID, csFirstName, csLastName, nTest1, nTest2)
{
}

CUndergraduate::CUndergraduate(const CUndergraduate& cUndergraduate) : CStudent(cUndergraduate)
{
}

CUndergraduate::~CUndergraduate()
{
}

double CUndergraduate::ComputeGPA() const
{
	return GetTest1() * 0.5 + GetTest2() * 0.5;
}

void CUndergraduate::Print() const
{
	CStudent::Print();
	cout << "GPA : " << ComputeGPA() << endl;
}

CUndergraduate& CUndergraduate::operator = (const CUndergraduate& cUndergraduate)
{
	if (this != &cUndergraduate)
		CStudent::operator = (cUndergraduate);
	return *this;
}