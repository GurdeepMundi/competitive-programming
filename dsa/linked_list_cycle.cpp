/**
 * @file linked_list_cycle.cpp
 * @author Gurdeep
 * @brief This algorithm uses a stack to find if there is a cycle in a linked list.
 *
 * @copyright Copyright (c) 2023
 */

#include <iostream>
#include <unordered_set>

using namespace std;
class List
{
public:
    List *next = NULL;
    int data = 0;
    List *getNext()
    {
        return next;
    }
    void setNext(List *n)
    {
        next = n;
    }
};

bool hasCycles(List* node)
{
    unordered_set<List*> myNodes;
    pair<unordered_set<List*>::iterator,bool> ret; // return
    while(node->getNext() != NULL)
    {
        ret = myNodes.insert(node);
        // If couldn't insert, return false
        if(ret.second == false) return true;
        node = node->next;
    }
    return false;
}

int main()
{
    List a, b;
    a.setNext(&b);
    b.setNext(&a);
    (hasCycles(&a))?cout << "cycles":cout << "no cycles";
    return 0;
}