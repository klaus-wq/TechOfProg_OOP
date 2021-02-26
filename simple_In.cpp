#include "simple_atd.h"
using namespace std;
namespace simple_numbers {
	// Ввод параметров простой дроби
	void simple::InData(ifstream& ifst) {
		ifst >> a >> b;
	}
} // end simple_numbers namespace