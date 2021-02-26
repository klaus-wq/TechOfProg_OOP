#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// ¬вод параметров числа
	void number::InData(ifstream& ifst) {
		ifst >> measure;
	}
} // end simple_numbers namespace