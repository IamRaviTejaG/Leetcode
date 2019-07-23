/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/binary-tree-paths/
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if (!root)
            return result;
        if (!root->left && !root->right)
        {
            result.push_back(to_string(root->val));
            return result;
        }
        vector<string> left = binaryTreePaths(root->left);
        vector<string> right = binaryTreePaths(root->right);
        for (auto l: left)
            result.push_back(to_string(root->val) + "->" + l);
        for (auto r: right)
            result.push_back(to_string(root->val) + "->" + r);
        return result;
    }
};
