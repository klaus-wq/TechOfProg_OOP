#include "complex_atd.h"
using namespace std;
namespace simple_numbers {
	// мультиметод
	void complex::MultiMethod(number* other, ofstream& ofst) {
		other->MMComp(ofst);
	}
}