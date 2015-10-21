
#include "Graduate.h"

CGraduate::CGraduate() : CStudent()
{
}

CGraduate::CGraduate(
	const unsigned int uID,
	const string csFirstName,
	const string csLastName,
	const unsigned int nTest1,
	const unsigned int nTest2) : CStudent(uID, csFirstName, csLastName, nTest1, nTest2)
{
}

CGraduate::CGraduate(const CGraduate& cGraduate) : CStudent(cGraduate)
{
}

CGraduate::~CGraduate()
{
}

double CGraduate::ComputeGPA() const
{
	return GetTest1() * 0.6 + GetTest2() * 0.4;
}

void CGraduate::Print() const
{
	CStudent::Print();
	cout << "GPA: " << ComputeGPA() << endl;
}

CGraduate& CGraduate::operator = (const CGraduate& cGraduate)
{
	if (this != &cGraduate)
		CStudent::operator=(cGraduate);
	return *this;
}
