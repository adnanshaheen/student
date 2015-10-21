
#include "Student.h"

CStudent::CStudent() : CPerson()
{
	m_nTest1 = 0;
	m_nTest2 = 0;
	m_cCourses.clear();
}

CStudent::CStudent(
	const unsigned int uID,
	const string csFirstName,
	const string csLastName,
	const unsigned int nTest1,
	const unsigned int nTest2) : CPerson(uID, csFirstName, csLastName), m_nTest1(nTest1), m_nTest2(nTest2)
{
	m_cCourses.clear();
}

CStudent::CStudent(const CStudent& cStudent) : CPerson(cStudent)
{
	SetTest1(cStudent.GetTest1());
	SetTest2(cStudent.GetTest2());
	CopyCourses(cStudent.GetCourses());
}

CStudent::~CStudent()
{
	m_cCourses.clear();
}

int CStudent::GetTest1() const
{
	return m_nTest1;
}

void CStudent::SetTest1(const unsigned int nTest1)
{
	m_nTest1 = nTest1;
}

int CStudent::GetTest2() const
{
	return m_nTest2;
}

void CStudent::SetTest2(const unsigned int nTest2)
{
	m_nTest2 = nTest2;
}

const COURSE_LIST* CStudent::GetCourses() const
{
	return &m_cCourses;
}

void CStudent::CopyCourses(const COURSE_LIST* pCourseList)
{
	for (COURSE_CITER cIter = pCourseList->begin(); cIter != pCourseList->end(); ++ cIter)
		m_cCourses.push_back(*cIter);
}

void CStudent::AddCourse(const CCourse cCourse)
{
	m_cCourses.push_back(cCourse);
}

bool CStudent::DeleteCourse(const CCourse* const pCourse)
{
	return false;
}

void CStudent::PrintCourses() const
{
	for (COURSE_CITER cIter = m_cCourses.begin(); cIter != m_cCourses.end(); ++ cIter)
		(*cIter).Print();
}

double CStudent::ComputeGPA() const
{
	return 0;
}

void CStudent::Print() const
{
	CPerson::Print();
	cout << "Test1 : " << GetTest1() << endl;
	cout << "Test2 : " << GetTest2() << endl;

	PrintCourses();
}

CStudent& CStudent::operator = (const CStudent& cStudent)
{
	if (this != &cStudent) {
		CPerson::operator=(cStudent);
		SetTest1(cStudent.GetTest1());
		SetTest2(cStudent.GetTest2());
		CopyCourses(cStudent.GetCourses());
	}
	return *this;
}
