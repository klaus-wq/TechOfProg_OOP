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
		char measure[3];
	public:
		// �������������, ���������� � ���� ����� �� ������
		static number* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; //����
		virtual void Out(ofstream& ofst) = 0; // �����
		virtual void OutComplex(ofstream& ofst);
		virtual int Real() = 0; //���������� � ��������������� �����
		bool Compare(number* other);
		virtual void MultiMethod(number* other, ofstream& ofst) = 0;
		virtual void MMComp(ofstream& ofst) = 0;
		virtual void MMSimp(ofstream& ofst) = 0;
		virtual void MMPol(ofstream& ofst) = 0;
	};
} // end simple_numbers namespace
#endif
