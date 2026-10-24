class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid=-1;
        int res=0;
        int left = 0;
        int right = nums.size()-1;
        if(target < nums[0])
        {
            return 0;
        }
        
        if(target > nums[right])
        {
            return right+1;
        }

        while(left <= right)
        {
            mid = left + (right-left)/2;
            if(nums[mid] == target)
            {
                return mid;
            }

            if(nums[mid] > target)
            {
                res= mid;
                right = mid - 1;
            }
            else{
                left = mid+1;
            }
        }
        return res;
    }
};