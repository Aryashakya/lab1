#include <iostream>
#include "LinkedList.h"

bool LinkedList::isEmpty()
{
    return HEAD == nullptr && TAIL == nullptr;
}

LinkedList::LinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
}

LinkedList::~LinkedList()
{
    delete this;
}
void LinkedList::addToHead(int data)
{
    Node *newNode = new Node();
    newNode->info = data;
    newNode->next = HEAD;
    HEAD = newNode;
    if (TAIL == nullptr)
    {
        TAIL = HEAD;
    }
}

void LinkedList::traverse(char separator)
{
    if (this->isEmpty())
    {
        std::cout << "List is Empty\n";
    }
    else
    {
        Node *temp = HEAD;
        while (temp != nullptr)
        {
            std::cout << temp->info << separator;
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}

int LinkedList::removeFromHead()
{

    if (!this->isEmpty())
    {
        Node *temp = HEAD;
        int data = temp->info;
        HEAD = temp->next;
        delete temp;
        if (HEAD == nullptr)
        {
            TAIL = nullptr;
        }
        return data;
    }
    else
    {
        std::cout << "List is empty" << std::endl;
        return 0;
    }
}

int LinkedList::removeFromTail()
{

    if (!this->isEmpty())
    {
        Node *temp = TAIL;
        if (HEAD == TAIL)
        {
            return HEAD->info;
            HEAD = TAIL = nullptr;
        }
        else
        {
            Node *pred = HEAD;
            while (pred->next != TAIL)
            {
                pred = pred->next;
            }
            TAIL = pred;
            pred->next = nullptr;
            return temp->info;
        }

        delete temp;
    }

    else
    {
        std::cout << "List is empty" << std::endl;
        return 0;
    }
}
void LinkedList::addToTail(int data)
{
    Node *temp = new Node();
    temp->info = data;
    temp->next = nullptr;
    TAIL->next = temp;
    TAIL = TAIL->next;
}

void LinkedList::add(int data, Node *predecessor)
{
    Node *newNode = new Node();
    newNode->info = data;
    newNode->next = predecessor->next;
    predecessor->next = newNode;
}

void LinkedList::remove(int data)
{
    if (!this->isEmpty())
    {
        if (HEAD->info == data)
        {
            removeFromHead();
        }

        else
        {
            Node *temp = new Node();
            temp = HEAD->next;
            Node *prev = new Node();
            prev = HEAD;
            while (temp != nullptr)
            {
                if (temp->info == data)
                {
                    break;
                }
                else
                {
                    prev = prev->next;
                    temp = temp->next;
                }
            }
            if (temp != nullptr)
            {
                prev->next = temp->next;
                delete temp;
                if (prev->next == nullptr)
                {
                    TAIL = prev;
                }
            }
            if (temp == nullptr)
            {
                std::cout << "Not found" << std::endl;
            }
        }
    }
    else
    {
        std::cout << "List is empty" << std::endl;
    }
}

bool LinkedList::retrieve(int data, Node*& dataOutPtr)
{
    Node *p = new Node();
    p = HEAD;
    while (p != nullptr && p->info != data)
    {
        p = p->next;
    }
    if (p == nullptr)
    {
        return false;
    }
    else
    {
        dataOutPtr = p;
        return true;
    }
}
