class Solution {
public:
    bool isalphanum(char c)
    {
        if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) return true;

        return false;
    }

    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<j)
        {
            char ci = tolower(s[i]);
            char cj = tolower(s[j]);
            if(!isalphanum(ci))
            {
                i++;
            }
            else if(!isalphanum(cj))
            {
                j--;
            }
            else if(ci != cj){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
