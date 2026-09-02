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
    void helper(TreeNode* root)
    {
        if(root == nullptr)
        {
            return;
        }

        if(root-> left == nullptr && root->right == nullptr)
        {
            return;
        }

        helper(root->left);
        helper(root->right);
        TreeNode * tempRoot = root->left;
        root->left = root->right;
        root->right = tempRoot;
    }

    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};
