#include "LinkedList.h"
#include "Stack.h"

void LinkedListStack::push(int data)
{
    list.addToHead(data);
}

int LinkedListStack::pop()
{
    return list.removeFromHead();
}
int LinkedListStack::top()
{
    return list.getHead();
}

void LinkedListStack::traverse()
{
    list.traverse();
}