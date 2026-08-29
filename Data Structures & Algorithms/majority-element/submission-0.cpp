class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //O(n), O(n)
        unordered_map<int, int> freq;

        for(int i: nums)
        {
            if(!freq.contains(i))
            {
                freq[i] = 1;
            }
            else freq[i]++;
        }

        for(auto it: freq)
        {
            if(it.second > nums.size()/2)
                return it.first;
        }
        return -1;
    }
};