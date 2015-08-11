#include <iostream>
#include <map>
#include <string>
#include "NormalAlgorithm.h"
#include "LinkedList.h"
#include "Tree.h"

using namespace std;

//#define LINK_LIST
#define NORMAL_ALGO
//#define TREE

int main() {
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

    ListNode *node22 = new ListNode(3);
    node22->next = node13;
    ListNode *node21 = new ListNode(4);
    node21->next = node22;
    ListNode *node20 = new ListNode(4);
    node20->next = node21;

    LinkedList linkList;
    //ListNode *result;
    //result = linkList.RemoveElements(node15, 10);
    cout << linkList.GetIntersectionNode(node21, node11)->val << endl;
//    while(node11)
//    {
//        cout << node11->val << " ";
//        node11 = node11->next;
//    }
#endif // LINK_LIST

#ifdef NORMAL_ALGO
    NormalAlgorithm normalAlgo;
//    vector<int> nums;
//    nums.push_back(1);
//    nums.push_back(2);
//    nums.push_back(3);
//    nums.push_back(4);
//    nums.push_back(3);
//    nums.push_back(5);
//    nums.push_back(7);
//    nums.push_back(4);
//    vector<int> result = normalAlgo.ProductExceptSelf(nums);
//    for(size_t i = 0; i < result.size(); ++i)
//        cout << result[i] << " ";
//    cout << endl;
    cout << normalAlgo.CountDigitOne(-1) << endl;

#endif // NORMAL_ALGO

#ifdef TREE
    Tree treeOper;
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(3);
    TreeNode *node3 = new TreeNode(6);
    TreeNode *node4 = new TreeNode(9);
    TreeNode *node5 = new TreeNode(2);
    node5->left = node1;
    node5->right = node2;
    TreeNode *node6 = new TreeNode(7);
    node6->left = node3;
    node6->right = node4;
    TreeNode *node7 = new TreeNode(4);
    node7->left = node5;
    node7->right = node6;

    treeOper.InvertTree(NULL);
#endif // TREE
    return 0;
}
