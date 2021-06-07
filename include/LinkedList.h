#pragma once

class Node
{
public:
    int info;
    Node *next;

    Node() : next(nullptr) {}
    Node(int info, Node *next) : info(info), next(next) {}
};

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    bool isEmpty(); 
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node *predecessor);
    int removeFromHead();
    int removeFromTail();
    void remove(int data);
    bool search(int data);
    bool retrieve(int data,Node*& dataOutPtr);
    void traverse(char separator = ' ');

private:
    Node *HEAD;
    Node *TAIL;
};
