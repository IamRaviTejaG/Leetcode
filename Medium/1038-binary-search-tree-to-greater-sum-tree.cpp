/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sum1 = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if (!root)
            return root;
        bstToGst(root->right);
        sum1 = root->val =  (sum1 + root->val);
        bstToGst(root->left);
        return root;
    }
};
