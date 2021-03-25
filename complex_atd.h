#pragma once
#ifndef __complex_atd__
#define __complex_atd__
// ��������� �������� ������ number
#include "number_atd.h"
namespace simple_numbers {
	// ����������� �����
	class complex : public number {
		int x, y; // Re, In
	public:
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		int Real(); //���������� � ��������������� �����
		void OutComplex(ofstream& ofst);
		complex() {}; // �������� ��� �������������.
		complex(int a, int b)
		{
			this->x = a;
			this->y = b;
		} // �������� ��� �������������.
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