
#pragma once

class COption
{
public:
	COption();
	~COption();

	int MainOptions() const;

	int StudentOptions() const;
	void CreateStudent();
	void PrintStudent() const;

	int EmployeeOptions() const;
	void CreateEmployee();
	void PrintEmployee() const;

	int GraduateOptions() const;
	void CreateGraduate();
	void PrintGraduate() const;

	int UndergradeOptions() const;
	void CreateUndergrade();
	void PrintUndergraduate() const;

	void CreateCourse();
	void PrintCourse();
};

