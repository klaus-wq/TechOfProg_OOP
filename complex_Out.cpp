#include "complex_atd.h"
using namespace std;
namespace simple_numbers {
	// ����� ���������� ������������ �����
	void complex::Out(ofstream& ofst) {
			ofst << "It is complex number: x = " << x << ", y = " << y << endl;
	}
} // end simple_numbers namespace