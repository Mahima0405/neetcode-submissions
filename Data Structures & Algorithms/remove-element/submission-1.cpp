class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)
        {
            return 0;
        }
        
        int i=0;
        int j= nums.size()-1;

        while(i<j)
        {
            if(nums[j] == val)
            {
                j--;
            }
            else if(nums[i]==val)
            {
                nums[i]= nums[j];
                nums[j]= val;
                i++;
            }
            else ++i;
            
        }
        if(nums[i] == val){
            return i;
        }
         return i+1;
    }
};