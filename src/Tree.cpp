#include "Tree.h"

using namespace std;

TreeNode *Tree::LowestCommonAncestorOfBST(TreeNode *root, TreeNode *p, TreeNode *q) {
    if(!root || !p || !q)
        return NULL;

    if(p == root || q == root)
        return root;

    if(root->val <= p->val && root->val <= q->val)
        LowestCommonAncestorOfBST(root->right, p, q);
    else if(root->val > p->val && root->val > q->val)
        LowestCommonAncestorOfBST(root->left, p, q);
    else
        return root;
}

TreeNode *Tree::InvertTree(TreeNode *root) {
    if(!root)
        return root;

    TreeNode *cur = root;
    TreeNode *temp;
    queue<TreeNode *> traverseQueue;
    traverseQueue.push(cur);

    while(!traverseQueue.empty()) {
        cur = traverseQueue.front();
        traverseQueue.pop();
        temp = cur->left;
        cur->left = cur->right;
        cur->right = temp;
        if(cur->left)
            traverseQueue.push(cur->left);
        if(cur->right)
            traverseQueue.push(cur->right);
    }
    return root;
}

TreeNode *Tree::LowestCommonAncestorBT(TreeNode *root, TreeNode *p, TreeNode *q) {
    if(!root || root == p || root == q)
        return root;

    TreeNode *left = LowestCommonAncestorBT(root->left, p, q);
    TreeNode *right = LowestCommonAncestorBT(root->right, p, q);

    return !left ? right : !right ? left : root;
}

void Tree::PostOrderFind(TreeNode *root, TreeNode *node) {
    TreeNode *pCur = root, *pLastVisit = NULL;

    stack<TreeNode *> traverseStack;

    while(pCur) {
        traverseStack.push(pCur);
        pCur = pCur->left;
    }

    while(!traverseStack.empty()) {
        pCur = traverseStack.top();
        traverseStack.pop();

        if(pCur->right == NULL || pCur->right == pLastVisit) {
            cout << pCur->val << endl;
            pLastVisit = pCur;
        } else {
            traverseStack.push(pCur);
            pCur = pCur->right;
            while(pCur) {
                traverseStack.push(pCur);
                pCur = pCur->left;
            }
        }
    }
}
