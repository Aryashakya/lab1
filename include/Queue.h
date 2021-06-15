#pragma once
#include "LinkedList.h"

class Queue
{
public:
    virtual void enqueue(int data) = 0;
    virtual int dequeue() = 0;
    virtual int front() = 0;
    virtual int rear() = 0;
};

class LinkedListQueue : public Queue
{
public:
    void enqueue(int data);
    int dequeue();
    int front();
    int rear();
    void traverse();

private:
    LinkedList list;
};