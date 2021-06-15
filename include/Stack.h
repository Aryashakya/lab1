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
    void push(int data);
    int pop();
    int top();
    void traverse();
    
private:
    LinkedList list;
};