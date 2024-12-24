// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Stack
{
    int top;
    int *arr;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int val)
    {
        if (top + 1 == size)
        {
            cout << "stack overflow..\n";
            return;
        }
        arr[++top] = val;
    }
    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "stack underflow occurred\n";
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty..\n";
            return -1;
        }
        else
            return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{

    cout << "stack is ready, now can enter the values to push \n";
    Stack stack(10);
    stack.push(4);
    cout << stack.peek() << endl;
    ;
    stack.push(1);
    stack.push(5);
    stack.pop();
    cout << stack.peek() << endl;
    ;
    return 0;
}