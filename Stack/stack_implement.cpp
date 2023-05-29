#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top = -1;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    void push(int ele)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = ele;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
            //   int ele  = arr[top];
        }
    }
    void peek()
    {
        if (top >= 0)
        {
            int ele = arr[top];
            cout << ele << endl;
        }
    }
    void isEmpty()
    {
        if (top >= 0)
        {
            cout << "Stack is not empty" << endl;
        }
        else
            cout << "Stack is empty" << endl;
    }
};

int main()
{

    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.peek();
    s.pop();
    s.peek();
    s.isEmpty();
    return 0;
}