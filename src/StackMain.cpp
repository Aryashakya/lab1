#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

int main()
{
    LinkedListStack s;
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
    return 0;
}
