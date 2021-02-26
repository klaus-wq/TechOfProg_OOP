#pragma once
#ifndef __simple_atd__
#define __simple_atd__
// Требуется описание класса number
#include "number_atd.h"
namespace simple_numbers {
	// простая дробь
	class simple : public number {
		int a, b; // числитель и знаменатель
	public:
		// переопределяем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		simple() {} // создание без инициализации.
	};
} // end simple_numbers namespace
#endif