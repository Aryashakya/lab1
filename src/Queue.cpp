#include "LinkedList.h"
#include "Queue.h"

void LinkedListQueue::enqueue(int data)
{
    list.addToTail(data);
}

int LinkedListQueue::dequeue()
{
    return list.removeFromHead();
}

int LinkedListQueue::front()
{
    return list.getHead();
}
int LinkedListQueue::rear()
{
    return list.getTail();
}

void LinkedListQueue::traverse()
{
    list.traverse();
}