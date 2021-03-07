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
		polar() {} // �������� ��� �������������.
	};
} // end simple_numbers namespace
#endif