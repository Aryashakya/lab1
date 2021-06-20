#include <iostream>
#include "LinkedList.h"
#include "Queue.h"
#include "Stack.h"

int main()
{
    LinkedListStack s;
    try
    {
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.traverse();
        std::cout << s.top() << std::endl;
        std::cout << s.pop() << std::endl;
        std::cout << s.top() << std::endl;
        std::cout << s.pop() << std::endl;
        s.traverse();
    }
    catch (const char *message)
    {
        std::cout << message << '\n';
    }

    LinkedListQueue q;
    try
    {
        q.enqueue(1);
        q.enqueue(2);
        q.traverse();
        q.enqueue(9);
        q.enqueue(5);
        q.traverse();
        std::cout << q.front() << std::endl;
        std::cout << q.dequeue() << std::endl;
        std::cout << q.dequeue() << std::endl;
        std::cout << q.rear() << std::endl;
        std::cout << q.dequeue() << std::endl;
        q.traverse();
        q.enqueue(3);
        q.enqueue(4);
        q.traverse();
    }
    catch (const char *message)
    {
        std::cout << message << '\n';
    }
    return 0;
}
