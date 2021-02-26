#include "polar_atd.h"
using namespace std;
namespace simple_numbers {
	// ¬вод параметров пол€рных координат
	void polar::InData(ifstream& ifst) {
		ifst >> r >> fi;
	}
} // end simple_numbers namespace