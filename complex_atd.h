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
		complex() {} // �������� ��� �������������.
	};
} // end simple_numbers namespace
#endif