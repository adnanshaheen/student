
#include "Undergraduate.h"
#include "Graduate.h"
#include "Option.h"

using namespace std;

int main()
{
	COption cOptions;
	int nOption = -1;
	int nSubOption = -1;

	while (nOption) {
		nOption = -1;
		nSubOption = -1;
		switch (nOption = cOptions.MainOptions()) {
		case 1:
			
			while (nSubOption != 5) {
				switch (nSubOption = cOptions.StudentOptions()) {
				case 1:
					cOptions.CreateStudent();
					break;
				case 2:
					cOptions.CreateStudent(true);
					break;
				case 3:
					cOptions.DeleteStudent();
					break;
				case 4:
					cOptions.PrintStudent();
					break;
				case 5:
					break;
				default:
					cerr << "Invalid option ..." << endl;
					break;
				}
			}
			break;
		case 2:
			while (nSubOption != 5) {
				switch (nSubOption = cOptions.UndergradeOptions()) {
				case 1:
					cOptions.CreateUndergrade();
					break;
				case 2:
					cOptions.CreateUndergrade(true);
					break;
				case 3:
					cOptions.DeleteUndergrade();
					break;
				case 4:
					cOptions.PrintUndergrade();
					break;
				case 5:
					break;
				default:
					cerr << "Invalid option ... " << endl;
					break;
				}
			}
			break;
		case 3:
			while (nSubOption != 5) {
				switch (nSubOption = cOptions.GraduateOptions()) {
				case 1:
					cOptions.CreateGraduate();
					break;
				case 2:
					cOptions.CreateGraduate(true);
					break;
				case 3:
					cOptions.DeleteGraduate();
					break;
				case 4:
					cOptions.PrintGraduate();
					break;
				case 5:
					break;
				default:
					cerr << "Invalid option ... " << endl;
					break;
				}
			}
			break;
		case 4:
			while (nSubOption != 5) {
				switch (nSubOption = cOptions.EmployeeOptions()) {
				case 1:
					cOptions.CreateEmployee();
					break;
				case 2:
					cOptions.CreateEmployee(true);
					break;
				case 3:
					cOptions.DeleteEmployee();
					break;
				case 4:
					cOptions.PrintEmployee();
					break;
				case 5:
					break;
				default:
					cerr << "Invalid option ... " << endl;
					break;
				}
			}
			break;
		case 5:
			while (nSubOption != 5) {
				switch (nSubOption = cOptions.CourseOptions()) {
				case 1:
					cOptions.CreateCourse();
					break;
				case 2:
					cOptions.CreateCourse(true);
					break;
				case 3:
					cOptions.DeleteCourse();
					break;
				case 4:
					cOptions.PrintCourse();
					break;
				case 5:
					break;
				default:
					cerr << "Invalid option ... " << endl;
				}
			}
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