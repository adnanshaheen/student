#pragma once

#include <iostream>
#include <string>
using namespace std;

class CPerson
{
public:
	CPerson();
	CPerson(const unsigned int uID, const string csFirstName, const string csLastName);
	CPerson(const CPerson& cPerson);
	virtual ~CPerson(void);

	unsigned int GetID() const;
	void SetID(const unsigned int uID);

	string GetFirstName() const;
	void SetFirstName(const string csFirstName);

	string GetLastName() const;
	void SetLastName(const string csLastName);

	CPerson& operator = (const CPerson& cPerson);

	virtual void Print() const;

private:
	string m_csFirstName;
	string m_csLastName;
	unsigned int m_uID;
};

