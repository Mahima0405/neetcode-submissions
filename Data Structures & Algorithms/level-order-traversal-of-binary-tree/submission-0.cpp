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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*, int>> nodes;
        
        vector<vector<int>> finalAns;
        vector<int> ans;

        nodes.push({root, 0});
        int level=0;

        while(!nodes.empty())
        {
            pair<TreeNode*, int> it= nodes.front();
            nodes.pop();
            if(it.first == nullptr)
            {
                continue;
            }

            if(it.second != level){
                finalAns.push_back(ans);
                ans.clear();
                level++;
            }
            
            ans.push_back(it.first->val);
            nodes.push({it.first->left, it.second+1});
            nodes.push({it.first->right, it.second+1});
        }
        if(ans.size() != 0)
        {
            finalAns.push_back(ans);
        }
        return finalAns;
    }
};
