#include "Stack.h"

using namespace std;

Stack::Stack()
{
    //ctor
}

Stack::~Stack()
{
    //dtor
}

void Stack::push(int x)
{
    stk1.push(x);
}

void Stack::pop()
{
    int temp;
    while(!stk1.empty())
    {
        temp = stk1.top();
        stk1.pop();
        stk2.push(temp);
    }
    stk2.pop();

    while(!stk2.empty())
    {
        temp = stk2.top();
        stk2.pop();
        stk1.push(temp);
    }
}

int Stack::peek()
{
    int temp, ret;
    while(!stk1.empty())
    {
        temp = stk1.top();
        stk1.pop();
        stk2.push(temp);
    }

    ret = stk2.top();

    while(!stk2.empty())
    {
        temp = stk2.top();
        stk2.pop();
        stk1.push(temp);
    }

    return ret;
}

bool Stack::empty()
{
    return stk1.empty() && stk2.empty();
}
