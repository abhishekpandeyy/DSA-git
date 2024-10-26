// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

class Stack
{
private:
    vector<int> stk;

public:
    void push(int val)
    {
        stk.push_back(val);
    }
    void pop()
    {
        if (stk.empty())
        {
            cout << "nothing to pop from stack..\n";
            return;
        }
        stk.pop_back();
    }
    void top()
    {
        if (stk.empty())
        {
            cout << "empty stack..\n";
            return;
        }
        cout << "top elem is : " << stk.back() << endl;
    }
    bool isEmpty()
    {
        return stk.empty() == true;
    }
};

int main()
{
    cout << "stack is ready, now can enter the values to push \n";
    Stack stack;
    stack.push(4);
    stack.top();
    stack.push(1);
    stack.push(5);
    stack.pop();
    stack.top();
    return 0;
}