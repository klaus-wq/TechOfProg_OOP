#include "polar_atd.h"
using namespace std;
namespace simple_numbers {
	// ���� ���������� �������� ���������
	void polar::InData(ifstream& ifst) {
		ifst >> r >> fi;
		number::InData(ifst);
	}
} // end simple_numbers namespace