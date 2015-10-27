
#pragma once

#include <vector>
#include "person.h"
#include "Course.h"

typedef vector<CCourse> COURSE_LIST;
typedef COURSE_LIST::const_iterator COURSE_CITER;

class CStudent : public CPerson
{
public:
	CStudent();
	CStudent(const unsigned int uID,
		const string csFirstName,
		const string csLastName,
		const unsigned int nTest1 = 0,
		const unsigned int nTest2 = 0);
	CStudent(const CStudent& cStudent);
	virtual ~CStudent(void);

	int GetTest1() const;
	void SetTest1(const unsigned int nTest1);

	int GetTest2() const;
	void SetTest2(const unsigned int nTest2);

	const COURSE_LIST* GetCourses() const;
	void CopyCourses(const COURSE_LIST* pCourseList);

	void AddCourse(const CCourse cCourse);
	bool DeleteCourse(const CCourse* const pCourse);
	void PrintCourses() const;

	virtual double ComputeGPA() const;

	virtual void Print() const;

	CStudent& operator = (const CStudent& cStudent);

private:
	unsigned int m_nTest1;
	unsigned int m_nTest2;

	COURSE_LIST m_cCourses;
};

