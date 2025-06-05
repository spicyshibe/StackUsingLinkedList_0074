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
                cout << "Stack is empty." << endl;
                return;

            }

            cout << "Popped value: " << temp->data << endl;
            top = temp->next; //update pointer top
            delete temp;
            
        }

        void peek()
        {
            if (isEmpty())
            {
                cout << "List is empty." << endl;

            }
            else 
            {
                Node *current = top;
                while (current != NULL)
                {
                    cout << current->data << " " << endl;
                    current = current->next;
                    
                }
                cout << endl;

            }//return value of the top node
        }

        bool isEmpty()
        {
            return top == NULL;

        }

};

int main()
{
    Stack stack;
    
    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. exit\n";
        cout << "Enter your choice: ";
        cin >> choice;



