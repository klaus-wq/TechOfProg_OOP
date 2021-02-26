#include "simple_atd.h"
using namespace std;
namespace simple_numbers {
	// Ввод параметров простой дроби
	void simple::InData(ifstream& ifst) {
		ifst >> a >> b;
		number::InData(ifst);
	}
} // end simple_numbers namespace