class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int, int> elementsCount;

        for(int i : nums)
        {
            if(!elementsCount.contains(i))
            {
                elementsCount[i] = 1;
            }
            else return true;
        }

        return false;
    }
};