class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> uniquenums;

        for(int n: nums)
        {
            if(uniquenums.contains(n))
            {
                return n;
            }
            uniquenums.insert(n);
        }
        return -1;
    }
};
