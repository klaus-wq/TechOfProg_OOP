#include "number_atd.h"
using namespace std;
namespace simple_numbers {
	// ����� ���������� �����
	void number::Out(ofstream& ofst) {
		ofst << "Measure = " << measure;
	}
} // end simple_numbers namespace