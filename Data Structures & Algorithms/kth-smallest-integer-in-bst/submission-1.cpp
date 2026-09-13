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
    int key;

    int helper(TreeNode* root)
    {
        if(root == nullptr)
        {
            return -1;
        }

        int ans= helper(root->left);
        if(ans >= 0)
        {
            return ans;
        }

        key--;
        if(key == 0)
        {
            return root->val;
        }
        ans= helper(root->right);
        return ans;
    }

    int kthSmallest(TreeNode* root, int k) {
        key= k;
        int ans= helper(root);
        return ans;
    }
};
