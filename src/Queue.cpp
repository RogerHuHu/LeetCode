#include "Queue.h"

using namespace std;

Queue::Queue() {
    //ctor
}

Queue::~Queue() {
    //dtor
}

void Queue::push(int x) {
     que1.push(x);
}

void Queue::pop() {
    int tmp;
    while(que1.size() > 1) {
        tmp = que1.front();
        que1.pop();
        que2.push(tmp);
    }
    que1.pop();

    while(!que2.empty()) {
        tmp = que2.front();
        que2.pop();
        que1.push(tmp);
    }
}

int Queue::top() {
    int tmp1, tmp2;
    while(!que1.empty()) {
        tmp1 = que1.front();
        que1.pop();
        que2.push(tmp1);
    }

    while(!que2.empty()) {
        tmp2 = que2.front();
        que2.pop();
        que1.push(tmp2);
    }

    return tmp1;
}

bool Queue::empty() {
    return que1.empty() && que2.empty();
}
