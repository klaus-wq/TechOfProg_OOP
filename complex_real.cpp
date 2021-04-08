#include "complex_atd.h"
#include <cmath>
#include <iostream>
using namespace std;
namespace simple_numbers {
	// ���������� ������������ � ���������������
	int complex::Real()
	{
		if (pow(x, 2) + pow(y, 2) < 0)
		{
			cout << "ComplexReal! ������ �� �������������� �����!" << endl;
			return 0;
		}
		else
		{
			return sqrt(pow(x, 2) + pow(y, 2));
		}
	}
} // end simple_numbers namespace