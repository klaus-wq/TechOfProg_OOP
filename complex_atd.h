#pragma once
#ifndef __complex_atd__
#define __complex_atd__
// “ребуетс€ описание класса number
#include "number_atd.h"
namespace simple_numbers {
	// комплексное число
	class complex : public number {
		int x, y; // Re, In
	public:
		// переопредел€ем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		int Real(); //приведение к действительному числу
		void OutComplex(ofstream& ofst);
		complex() {}; // создание без инициализации.
		complex(int a, int b)
		{
			this->x = a;
			this->y = b;
		} // создание без инициализации.
		int get_x(complex* c)
		{
			return c->x;
		}
		int get_y(complex* c)
		{
			return c->y;
		}
	};
} // end simple_numbers namespace
#endif