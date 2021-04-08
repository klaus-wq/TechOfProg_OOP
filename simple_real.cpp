#include "simple_atd.h"
#include <iostream>
using namespace std;
namespace simple_numbers {
	// Приведение комплексного к действительному
	int simple::Real()
	{
		if (b == 0)
		{
			cout << "SimpleReal! Деление на 0!" << endl;
			return 0;
		}
		else
		{
			return a / b;
		}
	}
} // end simple_numbers namespace