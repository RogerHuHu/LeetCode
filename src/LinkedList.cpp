#include "LinkedList.h"

using namespace std;

ListNode* LinkedList::RemoveElements(ListNode *head, int val) {
    while(head && head->val == val)
        head = head->next;

    if(head == NULL)
        return NULL;

    ListNode *pre = head;
    ListNode *lat = head->next;
    while(lat) {
        if(lat->val == val) {
            pre->next = lat->next;
            delete lat;
            lat = pre->next;
        } else {
            pre = lat;
            lat = lat->next;
        }
    }
    return head;
}

void LinkedList::DeleteNode(ListNode *node) {
    ListNode *temp = node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    free(temp);
}

bool LinkedList::IsPalindrome(ListNode *head) {
    int count = 0;
    ListNode *temp = head, *reversed;
    while(temp) {
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
    while(half-- && temp && reversed) {
        if(temp->val != reversed->val)
            return false;
        temp = temp->next;
        reversed = reversed->next;
    }
    return true;
}

ListNode *LinkedList::LinkedListReverse(ListNode *head) {
    if(!head)
        return NULL;
    ListNode *pre, *lat, *temp;
    pre = head;
    lat = temp = NULL;

    while(pre) {
        temp = pre->next;
        pre->next = lat;
        lat = pre;
        pre = temp;
    }

    return lat;
}

ListNode *LinkedList::GetIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *p1 = headA, *p2 = headB;
    int cnt1 = 0, cnt2 = 0;
    while(p1) {
        p1 = p1->next;
        ++cnt1;
    }

    while(p2) {
        p2 = p2->next;
        ++cnt2;
    }

    p1 = headA;
    p2 = headB;
    if(cnt1 > cnt2) {
        int diff = cnt1 - cnt2;
        while(diff--)
            p1 = p1->next;
    }
    else if(cnt1 < cnt2) {
        int diff = cnt2 - cnt1;
        while(diff--)
            p2 = p2->next;
    }

    while(p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;
    }
    return p1;
}
