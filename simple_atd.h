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
		simple() {} // �������� ��� �������������.
	};
} // end simple_numbers namespace
#endif