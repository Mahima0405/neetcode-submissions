class Solution {
public:
    bool isItACorrectPair(char ch1, char ch2)
    {
        if(ch1 == ')' && ch2 == '(')
        {
            return true;
        }
        else if (ch1 == '}' && ch2 == '{')
        {
            return true;
        }
        else if( ch1 == ']' && ch2 == '[')
        {
            return true;
        }
        else return false;
    }

    bool isValid(string s) {
        stack <char> charStack;

        for (auto it: s)
        {
            if(it == '(' || it == '{' || it == '[')
            {
                charStack.push(it);
            }
            else{
                if(charStack.empty())
                {
                    return false;
                }
                if(!isItACorrectPair(it, charStack.top()))
                {
                    return false;
                }
                charStack.pop();
            }
        }

        return charStack.empty();
    }
};
