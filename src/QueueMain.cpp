#include <iostream>
#include "LinkedList.h"
#include "Queue.h"

int main()
{
   LinkedListQueue q;
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);
        q.traverse();
        std::cout << q.front() << std::endl;
        std::cout << q.dequeue() << std::endl;
        std::cout << q.rear() << std::endl;
        std::cout << q.dequeue() << std::endl;
        q.traverse();
    return 0;
}
