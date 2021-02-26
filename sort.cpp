#include "container_atd.h"
#include "number_atd.h"
#ifndef NULL
#define NULL (0)
#endif
using namespace std;
namespace simple_numbers {
    bool number::Compare(number* other)
    {
        return Real() < other->Real();
    }

    void container::Sort()
    {
        node* left = head;
        node* right = head->next;

        node* temp = new node;

        for (int i = 0; i < len - 1; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (left->n->Compare(right->n))
                {
                    temp->n = left->n;
                    left->n = right->n;
                    right->n = temp->n;
                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
} // end simple_numbers namespace