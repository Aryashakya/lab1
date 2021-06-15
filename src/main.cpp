#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

bool sum(int data, int *dataOut);

int main()
{
    Node *a = new Node();
    LinkedList l;
    l.addToHead(1);
    l.addToHead(2);
    l.addToHead(3);
    l.addToHead(4);
    l.addToTail(5);
    l.addToTail(411);
    l.addToTail(432);
    l.traverse();
    l.removeFromHead();
    l.traverse();
    l.removeFromHead();
    l.traverse();
    l.removeFromTail();
    l.traverse();
    l.removeFromTail();
    l.traverse();
    l.retrieve(2, a) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
    l.add(8, a);
    l.traverse();
    l.retrieve(3, a) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
    l.add(7, a);
    l.traverse();
    l.search(10) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
    l.search(0) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
    l.search(2) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
    l.search(4) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
    l.search(432) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
}