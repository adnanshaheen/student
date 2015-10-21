
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
				break;
			case 2:
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
				break;
			case 2:
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
				break;
			case 2:
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
				break;
			case 2:
				break;
			case 3:
				break;
			default:
				cerr << "Invalid option ... " << endl;
				break;
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
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