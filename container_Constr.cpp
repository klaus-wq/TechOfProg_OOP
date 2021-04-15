#include "container_atd.h"
namespace simple_numbers {
	node::~node() {}
	container::container() {
		len = 0;
		head = NULL;
		tail = NULL;
	}

	void container::Clear()
	{
		node* curNode;
		curNode = head;
		while (curNode != NULL) {
			node* temp = curNode->next;
			delete curNode;
			curNode = temp;
		}
		head = NULL;
		tail = NULL;
		len = 0;

	}

	container::~container() {
		Clear();
	}
} // end simple_numbers namespace