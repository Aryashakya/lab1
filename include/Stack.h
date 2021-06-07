#pragma once
#include "LinkedList.h"

class Stack
{
public:
    virtual void push(int data) = 0;
    virtual int pop() = 0;
    // virtual int top() = 0;
};

class LinkedListStack : public Stack
{
public:
    void push(int data)
    {
        list.addToHead(data);
    };

    int pop()
    {
        return list.removeFromHead();
    };
private:
    LinkedList list;
};