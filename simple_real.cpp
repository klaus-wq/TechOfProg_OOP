#include "simple_atd.h"
#include <iostream>
using namespace std;
namespace simple_numbers {
	// ���������� ������������ � ���������������
	int simple::Real()
	{
		if (b == 0)
		{
			cout << "SimpleReal! ������� �� 0!" << endl;
			return 0;
		}
		else
		{
			return a / b;
		}
	}
} // end simple_numbers namespace