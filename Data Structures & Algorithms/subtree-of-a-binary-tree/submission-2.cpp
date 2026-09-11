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
    bool compare(TreeNode* root, TreeNode* subRoot)
    {
        if(root == nullptr && subRoot == nullptr)
        {
            return true;
        }

        if(!root || !subRoot)
        {
            return false;
        }

        if(root->val == subRoot->val)
        {
            return compare(root->left, subRoot->left) && compare(root->right, subRoot->right);
        }

        return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr && subRoot == nullptr)
        {
            return true;
        }

        if(root == nullptr || subRoot == nullptr)
        {
            return false;
        }

        bool isSub= false;
        if(root->val == subRoot->val)
        {
            isSub= compare(root, subRoot);
        }

        
        if(!isSub)
        {
            return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        }

        return isSub;
    }
};
