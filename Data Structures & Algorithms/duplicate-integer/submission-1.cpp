class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int, int> elementsCount;

        for(int i : nums)
        {   if(elementsCount.count(i))
            {
                return true;
            }
            else elementsCount[i] = 1;
        }

        return false;
    }
};