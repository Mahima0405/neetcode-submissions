class Solution {
public:
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<s.length() && j>=0 && i<j)
        {
            if(s[i] == s[j])
            {
                i++; j--;
            }
            else{
                return isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1);
            }
        }
        return true;
    }

    bool isPalindrome(string& s, int l, int r)
    {   
        while(l < r)
        {
            if(s[l] != s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};