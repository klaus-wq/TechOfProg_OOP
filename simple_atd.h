#pragma once
#ifndef __simple_atd__
#define __simple_atd__
// “ребуетс€ описание класса number
#include "number_atd.h"
namespace simple_numbers {
	// проста€ дробь
	class simple : public number {
		int a, b; // числитель и знаменатель
	public:
		// переопредел€ем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		int Real(); //приведение к действительному числу
		void MultiMethod(number* other, ofstream& ofst);
		void MMComp(ofstream& ofst);
		void MMSimp(ofstream& ofst);
		simple() {} // создание без инициализации.
	};
} // end simple_numbers namespace
#endif