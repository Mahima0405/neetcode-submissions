class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl= s.length();
        int tl= t.length();
        cout<<sl<<" "<<tl;

        if(sl != tl)
        {
            return false;
        }

        unordered_map<char, int> charsCountFors;
        unordered_map<char, int> charsCountFort;

        for(int i=0; i<sl; i++)
        {
            if(!charsCountFors.contains(s[i])){
                charsCountFors[s[i]] = 1;
            }
            else ++charsCountFors[s[i]];

            if(!charsCountFort.contains(t[i]))
            {
                charsCountFort[t[i]] = 1;
            }
            else ++charsCountFort[t[i]];
        }

        for(auto it: charsCountFors)
        {
            if(charsCountFort[it.first] != it.second)
            {
                return false;
            }
        }
        return true;
    }
};
