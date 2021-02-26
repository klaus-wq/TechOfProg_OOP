#pragma once
#ifndef __polar_atd__
#define __polar_atd__
// “ребуетс€ описание класса number
#include "number_atd.h"
namespace simple_numbers {
	// ппол€рные кооринаты
	class polar : public number {
		int r;
		double fi; // рассто€ние до точки и угол
	public:
		// переопредел€ем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		polar() {} // создание без инициализации.
	};
} // end simple_numbers namespace
#endif