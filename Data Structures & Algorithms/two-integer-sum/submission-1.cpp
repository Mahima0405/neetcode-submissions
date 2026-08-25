class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> elementIndex;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(elementIndex.contains(target - nums[i]))
            {
                return {elementIndex[target-nums[i]], i};
            }
            elementIndex[nums[i]] = i;
        }
        
        return {0,0};
    }
};
