#include "number_atd.h"
// Необходима подключить информацию обо всех имеющихся числах
#include "complex_atd.h"
#include "simple_atd.h"
#include "polar_atd.h"
using namespace std;
namespace simple_numbers {
	// Ввод параметров обобщенного числа
	number* number::In(ifstream& ifst) {
		number* nb;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			nb = new complex;
			break;
		case 2:
			nb = new simple;
			break;
		case 3:
			nb = new polar;
			break;
		default:
			return 0;
		}
		nb->InData(ifst);
		return nb;
	}
} // end simple_numbers namespace