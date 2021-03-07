#include "polar_atd.h"
using namespace std;
namespace simple_numbers {
	// Вывод полярных координат
	void polar::Out(ofstream& ofst) {
		ofst << "It is polar: r = " << r << ", fi = " << fi << endl;
		number::Out(ofst);
		ofst << endl;
	}
} // end simple_numbers namespace