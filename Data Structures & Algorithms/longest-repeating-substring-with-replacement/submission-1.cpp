class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int ans=0;
        int maxf=0;

        unordered_map<char, int> countMap;

        for(int r=0; r<s.length(); r++)
        {
            if(countMap.count(s[r]) != 0)
                countMap[s[r]]++;

            else countMap[s[r]]=1;

            maxf= max(maxf, countMap[s[r]]);

            while(r-l+1 - maxf > k)
            {
                countMap[s[l]]--;
                l++;
            }

            ans= max(ans, r-l+1);
        }
        return ans;
    }
};
