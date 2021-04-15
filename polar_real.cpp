#include "polar_atd.h"
#include <cmath>
#include <iostream>
using namespace std;
namespace simple_numbers {
	// ���������� �������� ��������� � ���������������
	int polar::Real()
	{
		if (pow((r) * sin(fi), 2) + pow((r) * cos(fi), 2) < 0)
		{
			cout << "PolarReal! ������ �� �������������� �����!" << endl;
			return 0;
		}
		else
		{
			return sqrt(pow((r)*sin(fi), 2) + pow((r)*cos(fi), 2));
		}
	}
} // end simple_numbers namespace