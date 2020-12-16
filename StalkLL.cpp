//============================================================================
// Name        : StalkLL.cpp
// Author      : Mrunmayee
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

using namespace std;

class node
{
public:
    int d;
    node *link;
    friend class list;
};
struct node *top;

class stack
{
   node *top;
   public:
    void push(int d);
    int pop();
    int display_first();
    int isEmpty();
    int isFull();

   //stack{
   //    top=NULL;
   //}
};

void stack::push(int d)
{

    node* temp = new node();
    if(isFull()==0)
    {
        temp->d=d;
        temp->link=top;
        top=temp;
        cout<<d<<" Is pushed into the Stack\n";
    }
    else{
        cout<<"Heap Overflow";
    }
}

int stack::pop()
{
	node* temp = new node();
    if(isEmpty()==0)
    {
        temp=top;
        top=top->link;
        temp->link=NULL;
        cout<<temp->d<<" is poped out of stalk\n";
        delete temp;


    }
    else{
        cout<<"Heap Underflow";
    }
}

int stack::isEmpty()
{
    if(top==NULL) return 1;
    return 0;
}

int stack::isFull()
{
	node* temp = new node();
    if(!temp) return 1;
    return 0;
}

int stack::display_first()
{
    if(!isEmpty())
        return top->d;
    else
        return 0;
}



int main()
{
    class stack s;
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);
    s.push(12);

    s.pop();


}
