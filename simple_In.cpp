#include "simple_atd.h"
#include <iostream>
using namespace std;
namespace simple_numbers {
	// Ввод параметров простой дроби
	void simple::InData(ifstream& ifst) {
		ifst >> a >> b;
		if (ifst.fail()) {
			cout << "Wrong input of simple!" << endl;
			exit(0);
		}
		number::InData(ifst);
	}
} // end simple_numbers namespace