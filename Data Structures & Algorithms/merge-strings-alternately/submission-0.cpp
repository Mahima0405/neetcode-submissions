class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string finalAns = "";
        int i=0, j=0;
        while(i<word1.length() && j<word2.length())
        {
            finalAns = finalAns + word1[i] + word2[j];
            i++; j++;
        }

        if(i == word1.length()){
            finalAns += word2.substr(j, word2.length());
        }
        else if(j == word2.length())
        {
            finalAns   += word1.substr(i, word1.length());
        }

        return finalAns;
    }
};