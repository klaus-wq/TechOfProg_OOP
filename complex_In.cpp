#include "complex_atd.h"
using namespace std;
namespace simple_numbers {
	// ���� ���������� ������������ �����
	void complex::InData(ifstream& ifst) {
		ifst >> x >> y;
		number::InData(ifst);
	}
} // end simple_numbers namespace