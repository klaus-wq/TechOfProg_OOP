#include "pch.h"
#include "CppUnitTest.h"
#include "../TechOfProg_OOP/simple_atd.h"
#include "../TechOfProg_OOP/simple_In.cpp"
#include "../TechOfProg_OOP/simple_Out.cpp"
#include "../TechOfProg_OOP/simple_real.cpp"
#include "../TechOfProg_OOP/polar_atd.h"
#include "../TechOfProg_OOP/polar_In.cpp"
#include "../TechOfProg_OOP/polar_Out.cpp"
#include "../TechOfProg_OOP/polar_real.cpp"
#include "../TechOfProg_OOP/complex_atd.h"
#include "../TechOfProg_OOP/complex_In.cpp"
#include "../TechOfProg_OOP/complex_Out.cpp"
#include "../TechOfProg_OOP/complex_real.cpp"
#include "../TechOfProg_OOP/complex_outComplex.cpp"
#include "../TechOfProg_OOP/container_atd.h"
#include "../TechOfProg_OOP/container_In.cpp"
#include "../TechOfProg_OOP/container_Out.cpp"
#include "../TechOfProg_OOP/container_Constr.cpp"
#include "../TechOfProg_OOP/number_atd.h"
#include "../TechOfProg_OOP/number_In.cpp"
#include "../TechOfProg_OOP/number_OutComplex.cpp"
#include "../TechOfProg_OOP/num_In.cpp"
#include "../TechOfProg_OOP/num_Out.cpp"
#include "../TechOfProg_OOP/sort.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;
using namespace simple_numbers;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace OOPTest
{
	TEST_CLASS(OOPTest)
	{
	public:
		
		string Read(const char* filename)
		{
			ifstream ifst(filename);
			string s;
			while (!ifst.eof())
			{             
				ifst >> s;
			}
			ifst.close();
			return s;
		}
		TEST_METHOD(TestOutIn)
		{
			ifstream ifst("in.txt");
			ofstream ofst("out.txt");
			container c;
			c.In(ifst);
			c.Out(ofst);
			string s1 = Read("out.txt");
			string s2 = Read("outMy.txt");
			Assert::AreEqual(s1, s2);

			ifstream ifst1("in1.txt");
			ofstream ofst1("out1.txt");
			container c1;
			c1.In(ifst1);
			c1.Out(ofst1);
			string s3 = Read("out1.txt");
			string s4 = Read("outMy1.txt");
			Assert::AreEqual(s3, s4);

			ifstream ifst2("in2.txt");
			ofstream ofst2("out2.txt");
			container c2;
			c2.In(ifst2);
			c2.Out(ofst2);
			string s5 = Read("out2.txt");
			string s6 = Read("outMy2.txt");
			Assert::AreEqual(s5, s6);
		}

		TEST_METHOD(TestSort)
		{
			ifstream ifst("in.txt");
			ofstream ofst("outSort.txt");
			container c;
			c.In(ifst);
			c.Sort();
			c.Out(ofst);
			string s1 = Read("outSort.txt");
			string s2 = Read("outMySort.txt");
			Assert::AreEqual(s1, s2);

			ifstream ifst1("in1.txt");
			ofstream ofst1("outSort1.txt");
			container c1;
			c1.In(ifst1);
			c1.Sort();
			c1.Out(ofst1);
			string s3 = Read("outSort1.txt");
			string s4 = Read("outMySort1.txt");
			Assert::AreEqual(s3, s4);

			ifstream ifst2("in2.txt");
			ofstream ofst2("outSort2.txt");
			container c2;
			c2.In(ifst2);
			c2.Sort();
			c2.Out(ofst2);
			string s5 = Read("outSort2.txt");
			string s6 = Read("outMySort2.txt");
			Assert::AreEqual(s5, s6);

			ifstream ifst3("inSort.txt");
			ofstream ofst3("outSort3.txt");
			container c3;
			c3.In(ifst3);
			c3.Sort();
			c3.Out(ofst3);
			string s7 = Read("outSort3.txt");
			string s8 = Read("outMySort3.txt");
			Assert::AreEqual(s7, s8);
		}

		TEST_METHOD(TestOutComplex)
		{
			ifstream ifst("in.txt");
			ofstream ofst("outComp.txt");
			container c;
			c.In(ifst);
			c.OutComplex(ofst);
			string s1 = Read("outComp.txt");
			string s2 = Read("outMyComp.txt");
			Assert::AreEqual(s1, s2);

			ifstream ifst1("in1.txt");
			ofstream ofst1("outComp1.txt");
			container c1;
			c1.In(ifst1);
			c1.OutComplex(ofst1);
			string s3 = Read("outComp1.txt");
			string s4 = Read("outMyComp1.txt");
			Assert::AreEqual(s3, s4);

			ifstream ifst2("in2.txt");
			ofstream ofst2("outComp2.txt");
			container c2;
			c2.In(ifst2);
			c2.OutComplex(ofst2);
			string s5 = Read("outComp2.txt");
			string s6 = Read("outMyComp2.txt");
			Assert::AreEqual(s5, s6);
		}

		TEST_METHOD(RealSimple)
		{
			int a = 10, b = 5;
			simple* nb = new simple(a, b);
			int actual = nb->Real();
			Assert::AreEqual(2, actual);

			int a1 = 5, b1 = 5;
			simple* nb1 = new simple(a1, b1);
			int actual1 = nb1->Real();
			Assert::AreEqual(1, actual1);

			int a2 = 5, b2 = 10;
			simple* nb2 = new simple(a2, b2);
			int actual2 = nb2->Real();
			Assert::AreEqual(0, actual2);
		}

		TEST_METHOD(RealComplex)
		{
			int x = 8, y = 6;
			complex* nb = new complex(x, y);
			int actual = nb->Real();
			Assert::AreEqual(10, actual);

			int x1 = 0, y1 = 0;
			complex* nb1 = new complex(x1, y1);
			int actual1 = nb1->Real();
			Assert::AreEqual(0, actual1);

			int x2 = 1, y2 = 2;
			complex* nb2 = new complex(x2, y2);
			int actual2 = nb2->Real();
			Assert::AreEqual(2, actual2);
		}

		TEST_METHOD(RealPolar)
		{
			int r = 360;
			double fi = 1;
			polar* nb = new polar(r, fi);
			int actual = nb->Real();
			Assert::AreEqual(360, actual);

			int r1 = 1;
			double fi1 = 360;
			polar* nb1 = new polar(r1, fi1);
			int actual1 = nb1->Real();
			Assert::AreEqual(1, actual1);

			int r2 = 0;
			double fi2 = 0;
			polar* nb2 = new polar(r2, fi2);
			int actual2 = nb2->Real();
			Assert::AreEqual(0, actual2);
		}

		TEST_METHOD(TestClear)
		{
			ifstream ifst("inClear.txt");
			ofstream ofst("outClear.txt");
			container c;
			c.In(ifst);
			c.Out(ofst);
			c.Clear();
			c.Out(ofst);
			string s1 = Read("outClear.txt");
			string s2 = Read("outMyClear.txt");
			Assert::AreEqual(s1, s1);
		}

		TEST_METHOD(InSimple1)
		{
			ifstream ifst("inSimple.txt");
			simple* s = new simple(10, 5);
			simple* nb = new simple;
			nb->InData(ifst);
			Assert::AreEqual(s->get_a(s), nb->get_a(nb));
			Assert::AreEqual(s->get_b(s), nb->get_b(nb));

			ifstream ifst1("inSimple1.txt");
			simple* s1 = new simple(5, 5);
			simple* nb1 = new simple;
			nb1->InData(ifst1);
			Assert::AreEqual(s1->get_a(s1), nb1->get_a(nb1));
			Assert::AreEqual(s1->get_b(s1), nb1->get_b(nb1));

			ifstream ifst2("inSimple2.txt");
			simple* s2 = new simple(5, 10);
			simple* nb2 = new simple;
			nb2->InData(ifst2);
			Assert::AreEqual(s2->get_a(s2), nb2->get_a(nb2));
			Assert::AreEqual(s2->get_b(s2), nb2->get_b(nb2));
		}
		
		TEST_METHOD(InComplex1)
		{
			ifstream ifst("inComplex.txt");
			complex* s = new complex(8, 6);
			complex* nb = new complex;
			nb->InData(ifst);
			Assert::AreEqual(s->get_x(s), nb->get_x(nb));
			Assert::AreEqual(s->get_y(s), nb->get_y(nb));

			ifstream ifst1("inComplex1.txt");
			complex* s1 = new complex(0, 0);
			complex* nb1 = new complex;
			nb1->InData(ifst1);
			Assert::AreEqual(s1->get_x(s1), nb1->get_x(nb1));
			Assert::AreEqual(s1->get_y(s1), nb1->get_y(nb1));

			ifstream ifst2("inComplex2.txt");
			complex* s2 = new complex(1, 2);
			complex* nb2 = new complex;
			nb2->InData(ifst2);
			Assert::AreEqual(s2->get_x(s2), nb2->get_x(nb2));
			Assert::AreEqual(s2->get_y(s2), nb2->get_y(nb2));
		}

		TEST_METHOD(InPolar1)
		{
			ifstream ifst("inPolar.txt");
			polar* s = new polar(360, 1);
			polar* nb = new polar;
			nb->InData(ifst);
			Assert::AreEqual(s->get_r(s), nb->get_r(nb));
			Assert::AreEqual(s->get_fi(s), nb->get_fi(nb));

			ifstream ifst1("inPolar1.txt");
			polar* s1 = new polar(1, 360);
			polar* nb1 = new polar;
			nb1->InData(ifst1);
			Assert::AreEqual(s1->get_r(s1), nb->get_r(nb1));
			Assert::AreEqual(s1->get_fi(s1), nb->get_fi(nb1));

			ifstream ifst2("inPolar2.txt");
			polar* s2 = new polar(0, 0);
			polar* nb2 = new polar;
			nb2->InData(ifst2);
			Assert::AreEqual(s2->get_r(s2), nb2->get_r(nb2));
			Assert::AreEqual(s2->get_fi(s2), nb2->get_fi(nb2));
		}

		TEST_METHOD(OutSimple)
		{
			ifstream ifst("inSimple.txt");
			ofstream ofst("outSimple.txt");
			simple* nb = new simple;
			nb->InData(ifst);
			nb->Out(ofst);
			string s1 = Read("outSimple.txt");
			string s2 = Read("outMySimple.txt");
			Assert::AreEqual(s1, s2);
		}

		TEST_METHOD(OutComplex)
		{
			ifstream ifst("inComplex.txt");
			ofstream ofst("outComplex.txt");
			complex* nb = new complex;
			nb->InData(ifst);
			nb->Out(ofst);
			string s1 = Read("outComplex.txt");
			string s2 = Read("outMyComplex.txt");
			Assert::AreEqual(s1, s2);
		}

		TEST_METHOD(OutPolar)
		{
			ifstream ifst("inPolar.txt");
			ofstream ofst("outPolar.txt");
			polar* nb = new polar;
			nb->InData(ifst);
			nb->Out(ofst);
			string s1 = Read("outPolar.txt");
			string s2 = Read("outMyPolar.txt");
			Assert::AreEqual(s1, s2);
		}

	};
}
