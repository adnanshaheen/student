
#include "Person.h"


CPerson::CPerson() : m_uID(0)
{
}

CPerson::CPerson(const unsigned int uID, const string csFirstName, const string csLastName)
{
	m_uID = uID;
	m_csFirstName = csFirstName;
	m_csLastName = csLastName;
}

CPerson::CPerson(const CPerson& cPerson)
{
	SetFirstName(cPerson.GetFirstName());
	SetLastName(cPerson.GetLastName());
	SetID(cPerson.GetID());
}

CPerson::~CPerson(void)
{
}

unsigned int CPerson::GetID() const
{
	return m_uID;
}

void CPerson::SetID(const unsigned int uID)
{
	m_uID = uID;
}

string CPerson::GetFirstName() const
{
	return m_csFirstName;
}

void CPerson::SetFirstName(const string csFirstName)
{
	m_csFirstName = csFirstName;
}

string CPerson::GetLastName() const
{
	return m_csLastName;
}

void CPerson::SetLastName(const string csLastName)
{
	m_csLastName = csLastName;
}

CPerson& CPerson::operator = (const CPerson& cPerson)
{
	if (this != &cPerson) {
		SetFirstName(cPerson.GetFirstName());
		SetLastName(cPerson.GetLastName());
		SetID(cPerson.GetID());
	}
	return *this;
}


void CPerson::Print() const
{
	cout << "ID : " << GetID() << endl;
	cout << "First Name: " << GetFirstName() << endl;
	cout << "Last Name:  " << GetLastName() << endl;
}
