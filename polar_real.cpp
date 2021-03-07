#include "polar_atd.h"
#include <cmath>
using namespace std;
namespace simple_numbers {
	// Приведение комплексного к действительному
	int polar::Real()
	{
		return sqrt(pow((r)*sin(fi), 2) + pow((r)*cos(fi), 2));
	}
} // end simple_numbers namespace