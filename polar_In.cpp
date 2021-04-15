#include "polar_atd.h"
#include <iostream>
using namespace std;
namespace simple_numbers {
	// ¬вод параметров пол€рных координат
	void polar::InData(ifstream& ifst) {
		ifst >> r >> fi;
		if (ifst.fail()) {
			cout << "Wrong input of polar!" << endl;
			exit(0);
		}
		number::InData(ifst);
	}
} // end simple_numbers namespace