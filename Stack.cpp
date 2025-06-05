#include <iostream>
using namespace std;

// Node class representing a single node in the linked list

class Node
{
    public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
        
    }
};

//class stack
class Stack
{
    private:
        Node *top; // membuat pointer ke top

    public:
        Stack()
        {
            top = NULL; // membuat stack top menjadi null
    
        }
