
#include <iostream>
#include "Course.h"

CCourse::CCourse() : m_nCredit(0)
{
}

CCourse::CCourse(const string csID, const string csName, const unsigned int nCredit)
{
	m_csID = csID;
	m_csName = csName;
	m_nCredit = nCredit;
}

CCourse::CCourse(const CCourse& cCourse)
{
	SetID(cCourse.GetID());
	SetName(cCourse.GetName());
	SetCredit(cCourse.GetCredit());
}

CCourse::~CCourse()
{
}

string CCourse::GetID() const
{
	return m_csID;
}

void CCourse::SetID(const string csID)
{
	m_csID = csID;
}

string CCourse::GetName() const
{
	return m_csName;
}

void CCourse::SetName(const string csName)
{
	m_csName = csName;
}

unsigned int CCourse::GetCredit() const
{
	return m_nCredit;
}

void CCourse::SetCredit(const int nCredit)
{
	m_nCredit = nCredit;
}

CCourse& CCourse::operator = (const CCourse& cCourse)
{
	if (this != &cCourse) {
		SetID(cCourse.GetID());
		SetName(cCourse.GetName());
		SetCredit(cCourse.GetCredit());
	}

	return *this;
}

void CCourse::Print() const
{
	cout << "Course ID: " << GetID() << endl;
	cout << "Course Name: " << GetName() << endl;
	cout << "Course Credits: " << GetCredit() << endl;
}
