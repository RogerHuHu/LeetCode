#ifndef _TREE_H_
#define _TREE_H_

#include <iostream>
#include <stack>
#include <queue>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Tree {
public:
    Tree() {}
    ~Tree() {}

    /*
      Lowest Common Ancestor of a Binary Search Tree
      Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

      According to the definition of LCA on Wikipedia: "The lowest common ancestor is defined between two nodes v and w
      as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself)."
             _______6______
            /              \
         ___2__          ___8__
        /      \        /      \
        0      _4       7       9
              /  \
              3   5
      For example, the lowest common ancestor (LCA) of nodes 2 and 8 is 6. Another example is LCA of nodes 2 and 4 is 2,
      since a node can be a descendant of itself according to the LCA definition.
    */
    TreeNode *LowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q);

    /*
      Invert a binary tree.      4         to       4
                               /   \              /   \
                              2     7            7     2
                             / \   / \          / \   / \
                            1   3 6   9        9   6 3   1
    */
    TreeNode *InvertTree(TreeNode *root);

    void PostOrderFind(TreeNode *root, TreeNode *node);
protected:
private:
};

#endif // _TREE_H_