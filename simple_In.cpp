#include "simple_atd.h"
using namespace std;
namespace simple_numbers {
	// ���� ���������� ������� �����
	void simple::InData(ifstream& ifst) {
		ifst >> a >> b;
		number::InData(ifst);
	}
} // end simple_numbers namespace