#pragma once
#ifndef __polar_atd__
#define __polar_atd__
// ��������� �������� ������ number
#include "number_atd.h"
namespace simple_numbers {
	// ��������� ���������
	class polar : public number {
		int r;
		double fi; // ���������� �� ����� � ����
	public:
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		int Real(); //���������� � ��������������� �����
		polar() {}; // �������� ��� �������������.
		polar(int x, double y)
		{
			this->r = x;
			this->fi = y;
		} // �������� ��� �������������.
		int get_r(polar* p)
		{
			return p->r;
		}
		int get_fi(polar* p)
		{
			return p->fi;
		}
		void MultiMethod(number* other, ofstream& ofst);
		void MMComp(ofstream& ofst);
		void MMSimp(ofstream& ofst);
		void MMPol(ofstream& ofst);
	};
} // end simple_numbers namespace
#endif