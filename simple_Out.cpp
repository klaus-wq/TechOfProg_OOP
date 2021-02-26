#include "simple_atd.h"
using namespace std;
namespace simple_numbers {
	// Вывод параметров простой дроби
		void simple::Out(ofstream & ofst) {
		ofst << "It is simple fraction: a = " << a << ", b = " << b << endl;
	}
} // end simple_numbers namespace