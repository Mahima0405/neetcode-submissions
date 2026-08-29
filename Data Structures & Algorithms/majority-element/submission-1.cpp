class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //O(n), 1
        //Boyer Moore's Voting Algo
        int res=0;
        int count=0;

        for(int a: nums)
        {
            if(count == 0)
            {
                res = a;
            }
            count += res==a? 1:-1;
        }

        return res;
    }
};