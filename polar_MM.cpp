#include "polar_atd.h"
using namespace std;
namespace simple_numbers {
	// мультиметод
	void polar::MultiMethod(number* other, ofstream& ofst) {
		other->MMPol(ofst);
	}
}