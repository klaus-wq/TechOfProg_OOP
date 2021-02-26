#pragma once
#ifndef __container_atd__
#define __container_atd__
#include "number_atd.h"
namespace simple_numbers {
		class node
		{
		public:
			number* n;
			node* next;
			node* prev;

			bool add_node(ifstream& ifst);
			bool output_node(ofstream& ofst);
			~node();
		};
		class container
		{
		public:
			int len;
			node* head;
			node* tail;
			void In(ifstream& ifst);
			void Out(ofstream& ofst);
			void Clear();

			container();
			~container();
		};
} // end simple_numbers namespace
#endif
