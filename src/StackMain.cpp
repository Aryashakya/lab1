#include <iostream>
#include "LinkedList.h"
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

    return 0;
}
