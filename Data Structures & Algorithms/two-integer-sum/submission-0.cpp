class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> elementIndex;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(elementIndex.contains(target - nums[i]))
            {
                ans.push_back(elementIndex[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            elementIndex[nums[i]] = i;
        }
        ans.push_back(0);
        ans.push_back(0);
        return ans;
    }
};
