#include "complex_atd.h"
#include <cmath>
using namespace std;
namespace simple_numbers {
	// ���������� ������������ � ���������������
	int complex::Real()
	{
		return sqrt(pow(x, 2) + pow(y, 2));
	}
} // end simple_numbers namespace