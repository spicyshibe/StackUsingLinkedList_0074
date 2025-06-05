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

        // Push operation: Insert an element onto the top of the 
        int push(int value)
        {
            Node *newNode = new Node(); // membuat node baru
            newNode->data = value; // memberi value
            newNode->next = top; // set pointer ke top
            top = newNode; // update top pointer
            cout << "Push Value: " << value << endl;
            return value;

        }

        void pop()
        {
            Node *temp = top;
            if (isEmpty())
            {
       

};

