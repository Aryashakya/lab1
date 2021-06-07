#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

bool sum(int data, int *dataOut);

int main()
{
    Node *a = new Node();
    // a = nullptr;
    LinkedList l;
    l.addToHead(1);
    l.addToHead(2);
    l.addToHead(3);
    l.addToHead(4);
    l.traverse();
    l.retrieve(2, a) ? std::cout << "Yes" << std::endl: std::cout << "No"<< std::endl;
    l.add(8,a);
    l.traverse();
    l.retrieve(3, a) ? std::cout << "Yes" << std::endl: std::cout << "No"<< std::endl;
    l.add(7,a);
    l.traverse();
}