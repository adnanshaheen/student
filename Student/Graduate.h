
#pragma once

#include "student.h"

class CGraduate : public CStudent
{
public:
	CGraduate();
	CGraduate(const unsigned int uID,
		const string csFirstName,
		const string csLastName,
		const unsigned int nTest1,
		const unsigned int nTest2);
	CGraduate(const CGraduate& cGraduate);
	virtual ~CGraduate();

	virtual double ComputeGPA() const;

	virtual void Print() const;
	
	CGraduate& operator = (const CGraduate& cGraduate);
};

