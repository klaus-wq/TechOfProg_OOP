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
		simple() {};
		simple( int x, int y) 
		{
			this->a = x;
			this->b = y;
		} // создание без инициализации.
		int get_a(simple *s)
		{
			return s->a;
		}
		int get_b(simple* s)
		{
			return s->b;
		}
	};
} // end simple_numbers namespace
#endif