#include "container_atd.h"
using namespace std;
namespace simple_numbers {
	// Ввод содержимого контейнера

	bool node::add_node(ifstream& ifst)
	{
		n = number::In(ifst);
		if (n == NULL)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	void container::In(ifstream& ifst)
	{
		while (!ifst.eof())
		{
			node* curNode = new node;
			if (curNode->add_node(ifst))
			{
				len++;
				if (head != NULL)
				{
					curNode->prev = tail;
					tail->next = curNode;
					tail = curNode;
				}
				else
				{
					curNode->prev = NULL;
					head = tail = curNode;
				}
			}
		}
	}

} // end simple_numbers namespace