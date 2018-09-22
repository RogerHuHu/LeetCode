#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <iostream>
//#include <malloc.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class LinkedList {
public:
    /*
      Remove all elements from a linked list of integers that have value val.

      Example
      Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
      Return: 1 --> 2 --> 3 --> 4 --> 5
    */
    ListNode *RemoveElements(ListNode *head, int val);

    /*
      Delete Node in a Linked List

      Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

      Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.
    */
    void DeleteNode(ListNode *node);

    /*
      Given a singly linked list, determine if it is a palindrome.
    */
    bool IsPalindrome(ListNode *head);

    /*
      Reverse a LinkedListŝ
    */
    ListNode *LinkedListReverse(ListNode *head);

    /*
       Write a program to find the node at which the intersection of two singly linked lists begins.
       For example, the following two linked lists:
       A:          a1 → a2
                           ↘
                             c1 → c2 → c3
                           ↗
       B:     b1 → b2 → b3
       begin to intersect at node c1.
    */
    ListNode *GetIntersectionNode(ListNode *headA, ListNode *headB);
protected:
private:
};

#endif // _LINKEDLIST_H_
