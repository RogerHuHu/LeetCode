#include "LinkedList.h"

using namespace std;

ListNode* LinkedList::RemoveElements(ListNode *head, int val)
{
    while(head && head->val == val)
        head = head->next;

    if(head == NULL)
        return NULL;

    ListNode *pre = head;
    ListNode *lat = head->next;
    while(lat)
    {
        if(lat->val == val)
        {
            pre->next = lat->next;
            delete lat;
            lat = pre->next;
        }
        else
        {
            pre = lat;
            lat = lat->next;
        }
    }
    return head;
}

void LinkedList::DeleteNode(ListNode *node)
{
    ListNode *temp = node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    free(temp);
}

bool LinkedList::IsPalindrome(ListNode *head)
{
    int count = 0;
    ListNode *temp = head, *reversed;
    while(temp)
    {
        ++count;
        temp = temp->next;
    }

    if(count < 2)
        return true;
    int half = count / 2;
    int remain = count - half;
    temp = head;
    while(remain--)
        temp = temp->next;
    reversed = LinkedListReverse(temp);
    temp = head;
    while(half-- && temp && reversed)
    {
        if(temp->val != reversed->val)
            return false;
        temp = temp->next;
        reversed = reversed->next;
    }
    return true;
}

ListNode *LinkedList::LinkedListReverse(ListNode *head)
{
    if(!head)
        return NULL;
    ListNode *pre, *lat, *temp;
    pre = head;
    lat = temp = NULL;

    while(pre)
    {
        temp = pre->next;
        pre->next = lat;
        lat = pre;
        pre = temp;
    }

    return lat;
}

