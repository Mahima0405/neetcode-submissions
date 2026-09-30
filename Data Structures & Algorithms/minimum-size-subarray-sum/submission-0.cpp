class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlength = INT_MAX;
        if(nums.size() == 0)
        {
            return 0;
        }
        if(nums.size() == 1)
        {
            return nums[0]==target;
        }

        vector<int> sumArray;
        sumArray.push_back(0);

        for(int i=0; i<nums.size(); i++)
        {
            sumArray.push_back(sumArray[i]+nums[i]);
        }

        int i=0; int j=1; int sumTillNow=0;
        while(j<sumArray.size())
        {
            if(sumArray[j]-sumArray[i] < target)
            {
                j++;
            }
            else{
                while(i<=j)
                {
                    if(sumArray[j]-sumArray[i] >= target)
                    {
                        i++;
                    }
                    else{
                        break;
                    }
                }
                minlength= min(minlength, (j-i+1));
            }
        }

        return minlength == INT_MAX? 0: minlength;
    }
};