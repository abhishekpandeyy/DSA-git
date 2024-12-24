// by linkedlsit

#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node()
    {
        next = nullptr;
        val = 0;
    }
};

class Stack
{
private:
    Node *head;

public:
    Stack()
    {
        head = nullptr;
    }

    // Destructor to clean up the stack
    ~Stack()
    {
        while (head != nullptr)
        {
            pop();
        }
    }

    void push(int val)
    {
        Node *newNode = new Node();
        newNode->val = val;
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        if (head == nullptr)
            return; // Stack is empty, nothing to pop
        Node *t = head;
        head = head->next;
        delete t; // Free the memory
    }

    int top()
    {
        if (head != nullptr)
        {
            return head->val; // Return the value at the top
        }
        throw runtime_error("Stack is empty"); // Throw an exception for better error handling
    }
};

int main()
{
    // Stack implementations using linked list. The idea is simple: add node at head and remove nodes from the head; top is also accessed via the head.

    Stack st;
    st.push(5);
    cout << st.top() << endl; // Should print 5
    st.push(1);
    st.push(9);
    cout << st.top() << endl; // Should print 9
    st.pop();
    cout << st.top() << endl; // Should print 1
    return 0;
}
