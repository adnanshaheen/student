
#pragma once

class CStudent;
class CEmployee;
class CUndergraduate;
class CGraduate;
class CCourse;

class COption
{
public:
	COption();
	~COption();

	int MainOptions() const;

	int StudentOptions() const;
	void CreateStudent(bool bParam = false);
	void PrintStudent() const;
	void DeleteStudent();

	int EmployeeOptions() const;
	void CreateEmployee(bool bParam = false);
	void PrintEmployee() const;
	void DeleteEmployee();

	int GraduateOptions() const;
	void CreateGraduate(bool bParam = false);
	void PrintGraduate() const;
	void DeleteGraduate();

	int UndergradeOptions() const;
	void CreateUndergrade(bool bParam = false);
	void PrintUndergrade() const;
	void DeleteUndergrade();

	int CourseOptions() const;
	void CreateCourse(bool bParam = false);
	void PrintCourse();
	void DeleteCourse();

private:
	void AddCourses();

private:
	CStudent* m_pStudent;
	CEmployee* m_pEmployee;
	CUndergraduate* m_pUndergrade;
	CGraduate* m_pGraduate;
	CCourse* m_pCourse;
};

