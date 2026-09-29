class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> set;
        int l=0;
        for(int r=0; r<nums.size(); r++)
        {
            if(r-l > k)
            {
                set.erase(nums[l]);
                l++;
            }

            if(set.count(nums[r]) != 0)
            {
                return true;
            }

            set.insert(nums[r]);
        }

        return false;
    }
};