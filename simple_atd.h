#pragma once
#ifndef __simple_atd__
#define __simple_atd__
#include "number_atd.h"
namespace simple_numbers {
	// простая дробь
	class simple : public number {
		int a, b; // числитель и знаменатель
	public:
		// переопределяем интерфейс класса
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
		void MultiMethod(number* other, ofstream& ofst);
		void MMComp(ofstream& ofst);
		void MMSimp(ofstream& ofst);
		void MMPol(ofstream& ofst);
	};
} // end simple_numbers namespace
#endif