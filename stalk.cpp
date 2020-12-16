//============================================================================
// Name        : stalk.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;
#define MAX 1000
class Stack
{
    int Top;

    public:
        int s[MAX];
        void push(int d);
        int pop();
        int isFull();
        int isEmpty();
        Stack()
        {
            Top=-1;

        }
};

void Stack::push(int d)
{
    if(isFull()==0)
    {
        Top++;
        s[Top]=d;
        cout << d << " pushed into stack\n";
    }
    else
    {
        cout<<"Stack Overflow";
    }
}

int Stack::pop()
{
    int data;
    if(isEmpty()==0)
    {
        data=s[Top];
        Top--;
        return data;
    }
    else
    {
        cout<<"Stack Underflow";
        return 0;
    }
}

int Stack::isFull()
{
    if(Top==MAX-1) return 1;
    return 0;
}

int Stack::isEmpty()
{
    if(Top==-1) return 1;
    return 0;
}


int main()
{
    class Stack s;

    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(10);
    s.push(20);
    cout << s.pop() << " Popped from stack\n";
    return 0;
}
