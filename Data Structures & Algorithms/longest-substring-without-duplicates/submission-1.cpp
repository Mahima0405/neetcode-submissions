class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;

        int i=0; int j=0;
        int len= 0;

        while(j<s.length())
        {
            if(mp.count(s[j]) != 0)
            {
                i= max(i, mp[s[j]]+1);
            }

            len= max(len, j-i+1);
            mp[s[j]] = j;
            j++;
        }

        return len;
    }
};
