#ifndef _STACK_H_
#define _STACK_H_

#include <stack>

using namespace std;

class Stack
{
    public:
        Stack();
        ~Stack();

        /*
          Implement the following operations of a queue using stacks.

          push(x) -- Push element x to the back of queue.
          pop() -- Removes the element from in front of queue.
          peek() -- Get the front element.
          empty() -- Return whether the queue is empty.
        */
        /*****************************************/
        // Push element x to the back of queue.
        void push(int x);

        // Removes the element from in front of queue.
        void pop(void);

        // Get the front element.
        int peek(void);

        // Return whether the queue is empty.
        bool empty(void);
        /****************************************/
    protected:
    private:
        stack<int> stk1;
        stack<int> stk2;
};

#endif // _STACK_H_
