/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/validate-binary-search-tree
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
private:
    bool isValidBST(TreeNode* root, long min, long max)
    {
        if (root == NULL)
            return true;        
        else if (root->val <= min || root->val >= max)
            return false;
        return isValidBST(root->left, min, root->val) && isValidBST(root->right, root->val, max);
    }
    
public:
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, -LONG_MAX, LONG_MAX);
    }
};
