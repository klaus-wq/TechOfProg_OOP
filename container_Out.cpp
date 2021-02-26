#include "container_atd.h"
using namespace std;
namespace simple_numbers {
	// Вывод содержимого контейнера
	bool node::output_node(ofstream& ofst)
	{
		n->Out(ofst);
		return true;
	}

	// Вывод содержимого контейнера
	void container::Out(ofstream& ofst)
	{
		ofst << "Container contains " << len << " elements. " << endl;
		//ВЫВОДИМ СПИСОК С НАЧАЛА
		node* curNode = head;
		int i = 0;

		while (curNode != NULL)
		{
			ofst << i << ": ";
			curNode->output_node(ofst);
			curNode = curNode->next;
			i++;
		}
	}

} // end simple_numbers namespace