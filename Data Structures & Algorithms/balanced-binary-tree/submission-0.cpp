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
    bool balanced;
    int height(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }

        if(balanced == false)
        {
            return 0;
        }

        int leftheight = height(root->left);
        int rightheight= height(root->right);
        if(abs(leftheight-rightheight) > 1)
        {
            balanced = false;
            return 0;
        }
        return max(leftheight, rightheight)+1;
    }


    bool isBalanced(TreeNode* root) {
        if(root == nullptr)
        {
            return true;
        }

        balanced= true;
        int x= height(root);
        return balanced;
    }
};
