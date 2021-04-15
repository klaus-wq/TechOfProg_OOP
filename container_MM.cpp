#include "container_atd.h"
namespace simple_numbers {

	node *container::get_node(int offset) {

		struct node* curNode = head;
		int i;

		for (i = 0; i < offset; i++) {
			curNode = curNode->next;
		}

		return curNode;
	}

	//Ìףכüעטלועמה
	void container::Multimethod(ofstream& ofst) {
		int count = 1;

		ofst << "Multimethod." << endl;

		for (int i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {
				ofst << count << ". ";
				get_node(i)->n->MultiMethod(get_node(j)->n, ofst);
				get_node(i)->output_node(ofst);
				get_node(j)->output_node(ofst);
				count++;
			}
		}

	}

} // end simple_numbers namespace