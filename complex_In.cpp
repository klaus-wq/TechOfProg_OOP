#include "complex_atd.h"
#include <iostream>
using namespace std;
namespace simple_numbers {
	// Ввод параметров комплексного числа
	void complex::InData(ifstream& ifst) {
		ifst >> x >> y;
		if (ifst.fail()) {
			cout << "Wrong input of complex!" << endl;
			exit(0);
		}
		number::InData(ifst);
	}
} // end simple_numbers namespace