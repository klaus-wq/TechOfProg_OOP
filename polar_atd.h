#pragma once
#ifndef __polar_atd__
#define __polar_atd__
// Требуется описание класса number
#include "number_atd.h"
namespace simple_numbers {
	// пполярные кооринаты
	class polar : public number {
		int r;
		double fi; // расстояние до точки и угол
	public:
		// переопределяем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		int Real(); //приведение к действительному числу
		polar() {}; // создание без инициализации.
		polar(int x, double y)
		{
			this->r = x;
			this->fi = y;
		} // создание без инициализации.
		int get_r(polar* p)
		{
			return p->r;
		}
		int get_fi(polar* p)
		{
			return p->fi;
		}
	};
} // end simple_numbers namespace
#endif