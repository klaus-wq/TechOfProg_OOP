#pragma once
#ifndef __complex_atd__
#define __complex_atd__
// Требеутся описание класса number
#include "number_atd.h"
namespace simple_numbers {
	// комплексное число
	class complex : public number {
		int x, y; // Re, In
	public:
		// переопределяем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		int Real(); //приведение к действительному числу
		void MultiMethod(number* other, ofstream& ofst);
		void MMComp(ofstream& ofst);
		void MMSimp(ofstream& ofst);
		complex() {} // создание без инициализации.
	};
} // end simple_numbers namespace
#endif