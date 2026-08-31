class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();
        int i=0;
        int j=1;

        while(j < nums.size())
        {
            while(j < nums.size() && nums[i]==nums[j])
            {
                j++;
            }
            if(i<nums.size()-1)
            {
                nums[i+1] = j >= nums.size()? nums[i+1]: nums[j];
            }
            i++;
        }

        return i;
    }
};