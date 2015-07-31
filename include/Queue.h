#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <queue>

using namespace std;

class Queue {
public:
    Queue();
    ~Queue();

    /*
      Implement the following operations of a stack using queues.

      push(x) -- Push element x onto stack.
      pop() -- Removes the element on top of the stack.
      top() -- Get the top element.
      empty() -- Return whether the stack is empty.
    */
    /*****************************************/
    // Push element x onto stack.
    void push(int x);

    // Removes the element on top of the stack.
    void pop();

    // Get the top element.
    int top();

    // Return whether the stack is empty.
    bool empty();
    /*****************************************/
protected:
private:
    queue<int> que1;
    queue<int> que2;
};

#endif // _QUEUE_H_
