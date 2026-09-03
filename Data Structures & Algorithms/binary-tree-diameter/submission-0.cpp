/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxDia = 0;

    int helper(TreeNode * root)
    {
        if(root==nullptr)
        {
            return 0;
        }

        if(root->left == nullptr && root->right == nullptr)
        {
            return 0;
        }

        int leftdia= root->left == nullptr? 0 : helper(root->left)+1;
        int rightdia= root->right == nullptr? 0: helper(root->right)+1;
        maxDia = max(maxDia, leftdia+rightdia);
        return max(leftdia, rightdia);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int x= helper(root);
        return maxDia;
    }
};
