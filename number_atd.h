#pragma once
#ifndef __number_atd__
#define __number_atd__
#include <fstream>
using namespace std;
namespace simple_numbers {
	// �����, ����������� ��� ��������� �����.
	// �������� �����������, �����������, ��� �����,
	// �������� ����������
	class number {
	public:
		// �������������, ���������� � ���� ����� �� ������
		static number* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; // ����
		virtual void Out(ofstream& ofst) = 0; // �����
		virtual int Real() = 0; //���������� � ��������������� �����
		bool Compare(number* other);
	};
} // end simple_numbers namespace
#endif
