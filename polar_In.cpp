#include "polar_atd.h"
using namespace std;
namespace simple_numbers {
	// ¬вод параметров пол€рных координат
	void polar::InData(ifstream& ifst) {
		ifst >> r >> fi;
		number::InData(ifst);
	}
} // end simple_numbers namespace