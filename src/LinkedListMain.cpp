#include <iostream>
#include "LinkedList.h"

int main()
{
    Node *a = new Node();
    LinkedList l;
    try
    {
        l.addToHead(1);
        l.addToHead(2);
        l.addToHead(3);
        l.addToHead(4);
        l.addToTail(5);
        l.addToTail(411);
        l.addToTail(432);
        l.traverse();
        std::cout << l.removeFromHead() << std::endl;
        std::cout << l.removeFromHead() << std::endl;
        std::cout << l.removeFromTail() << std::endl;
        l.traverse();
        l.retrieve(2, a) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
        l.add(8, a);
        l.traverse();
        l.retrieve(3, a) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
        l.add(7, a);
        l.traverse();
        l.remove(1);
        l.remove(2);
        l.traverse();
        l.remove(3);
        l.search(10) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
        l.search(8) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
        l.search(2) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
        l.search(4) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
        l.search(432) ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
    }
    catch (const char *message)
    {
        std::cout << message << '\n';
    }
}