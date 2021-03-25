#pragma once
#ifndef __simple_atd__
#define __simple_atd__
// ��������� �������� ������ number
#include "number_atd.h"
namespace simple_numbers {
	// ������� �����
	class simple : public number {
		int a, b; // ��������� � �����������
	public:
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		int Real(); //���������� � ��������������� �����
		simple() {};
		simple( int x, int y) 
		{
			this->a = x;
			this->b = y;
		} // �������� ��� �������������.
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