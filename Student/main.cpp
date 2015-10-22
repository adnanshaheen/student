
#include "Undergraduate.h"
#include "Graduate.h"
#include "Option.h"

using namespace std;

int main()
{
	COption cOptions;
	int nOption = -1;

	while (nOption) {
		switch (nOption = cOptions.MainOptions()) {
		case 1:
			switch (cOptions.StudentOptions()) {
			case 1:
				cOptions.CreateStudent();
				break;
			case 2:
				cOptions.CreateStudent(true);
				break;
			case 3:
				break;
			default:
				cerr << "Invalid option ..." << endl;
				break;
			}
			break;
		case 2:
			switch (cOptions.UndergradeOptions()) {
			case 1:
				cOptions.CreateUndergrade();
				break;
			case 2:
				cOptions.CreateUndergrade(true);
				break;
			case 3:
				break;
			default:
				cerr << "Invalid option ... " << endl;
				break;
			}
			break;
		case 3:
			switch (cOptions.GraduateOptions()) {
			case 1:
				cOptions.CreateGraduate();
				break;
			case 2:
				cOptions.CreateGraduate(true);
				break;
			case 3:
				break;
			default:
				cerr << "Invalid option ... " << endl;
				break;
			}
			break;
		case 4:
			switch (cOptions.EmployeeOptions()) {
			case 1:
				cOptions.CreateEmployee();
				break;
			case 2:
				cOptions.CreateEmployee(true);
				break;
			case 3:
				break;
			default:
				cerr << "Invalid option ... " << endl;
				break;
			}
			break;
		case 5:
			switch (cOptions.CourseOptions()) {
			case 1:
				cOptions.CreateCourse();
				break;
			case 2:
				cOptions.CreateCourse(true);
				break;
			case 3:
				break;
			default:
				cerr << "Invalid option ... " << endl;
			}
			break;
		case 6:
			cOptions.PrintStudent();
			break;
		case 7:
			cOptions.PrintUndergrade();
			break;
		case 8:
			cOptions.PrintGraduate();
			break;
		case 9:
			cOptions.PrintEmployee();
			break;
		case 10:
			cOptions.PrintCourse();
			break;
		case 0:
			break;
		default:
			cerr << "Invalid option" << endl;
			break;
		}
	}

	return 0;
}