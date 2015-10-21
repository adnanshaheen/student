
#pragma once

#include <string>

using namespace std;

class CCourse // create an interface for this, and person, create an interface for print 
{
public:
	CCourse();
	CCourse(const string csID, const string csName, const unsigned int nCredit);
	CCourse(const CCourse& cCourse);
	~CCourse();

	string GetID() const;
	void SetID(const string csID);

	string GetName() const;
	void SetName(const string csName);

	unsigned int GetCredit() const;
	void SetCredit(const int nCredit);

	CCourse& operator = (const CCourse& cCourse);

	void Print() const;

private:
	string m_csName;
	string m_csID;
	unsigned int m_nCredit;
};

