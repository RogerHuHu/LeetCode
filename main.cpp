#include <iostream>
#include <map>
#include <string>
#include "NormalAlgorithm.h"
#include "LinkedList.h"

using namespace std;

#define LINK_LIST
//#define NORMAL_ALGO
//#define TREE

int main()
{
#ifdef LINK_LIST
    //ListNode *node15 = new ListNode(1);
    ListNode *node14 = new ListNode(1);
    //node14->next = node15;
    ListNode *node13 = new ListNode(2);
    node13->next = node14;
    ListNode *node12 = new ListNode(1);
    node12->next = node13;
    ListNode *node11 = new ListNode(1);
    node11->next = node12;

    LinkedList linkList;
    //ListNode *result;
    //result = linkList.RemoveElements(node15, 10);
    cout << linkList.IsPalindrome(node11) << endl;
//    while(node11)
//    {
//        cout << node11->val << " ";
//        node11 = node11->next;
//    }
#endif // LINK_LIST

#ifdef NORMAL_ALGO
    NormalAlgorithm normalAlgo;
    cout << normalAlgo.HappyNumber(7) << endl;
#endif // NORMAL_ALGO
    return 0;
}
