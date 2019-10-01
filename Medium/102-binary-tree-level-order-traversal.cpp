/*
Author: Ravi Teja Gannavarapu

Difficulty: Medium

https://leetcode.com/problems/binary-tree-level-order-traversal/
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        queue <TreeNode *> q;
        q.push(root);
        int qsize = q.size();
        vector<vector<int>> v;
        
        if (root == NULL)
            return v;
        
        while (1)
        {
            vector<int> a;
            qsize = q.size();
            
            if (qsize == 0)
                break;
            
            while (qsize)
            {
                TreeNode *temp = q.front();
                q.pop();

                a.push_back(temp->val);

                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);

                qsize--;
            }
            v.push_back(a);
        }
        
        // reverse(v.begin(), v.end());
        return v;
    }
};
