#pragma once
#ifndef __number_atd__
#define __number_atd__
#include <fstream>
using namespace std;
namespace simple_numbers {
	//  ласс, обобщающает все имеющиес€ числа.
	// явл€етс€ абстрактным, обеспечива€, тем самым,
	// проверку интерфейса
	class number {
		char measure[3];
	public:
		// идентификаци€, порождение и ввод чисел из потока
		static number* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; //ввод
		virtual void Out(ofstream& ofst) = 0; // вывод
		virtual void OutComplex(ofstream& ofst);
		virtual int Real() = 0; //приведение к действительному числу
		bool Compare(number* other);
	};
} // end simple_numbers namespace
#endif
