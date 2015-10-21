#pragma once
#include "student.h"
class CUndergraduate :
	public CStudent
{
public:
	CUndergraduate();
	CUndergraduate(const unsigned int uID,
		const string csFirstName,
		const string csLastName,
		const unsigned int nTest1,
		const unsigned int nTest2);
	CUndergraduate(const CUndergraduate& cUndergraduate);
	virtual ~CUndergraduate();

	virtual double ComputeGPA() const;

	virtual void Print() const;
	
	CUndergraduate& operator = (const CUndergraduate& cUndergraduate);
};

