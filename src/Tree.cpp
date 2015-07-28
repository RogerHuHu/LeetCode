#include "Tree.h"

using namespace std;

TreeNode *Tree::LowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if(!root || !p || !q)
        return NULL;

    if(p == root || q == root)
        return root;

    if(root->val <= p->val && root->val <= q->val)
        LowestCommonAncestor(root->right, p, q);
    else if(root->val > p->val && root->val > q->val)
        LowestCommonAncestor(root->left, p, q);
    else
        return root;
}

void Tree::PostOrderFind(TreeNode *root, TreeNode *node)
{
    TreeNode *pCur = root, *pLastVisit = NULL;

    stack<TreeNode *> traverseStack;

    while(pCur)
    {
        traverseStack.push(pCur);
        pCur = pCur->left;
    }

    while(!traverseStack.empty())
    {
        pCur = traverseStack.top();
        traverseStack.pop();

        if(pCur->right == NULL || pCur->right == pLastVisit)
        {
            cout << pCur->val << endl;
            pLastVisit = pCur;
        }
        else
        {
            traverseStack.push(pCur);
            pCur = pCur->right;
            while(pCur)
            {
                traverseStack.push(pCur);
                pCur = pCur->left;
            }
        }
    }
}
