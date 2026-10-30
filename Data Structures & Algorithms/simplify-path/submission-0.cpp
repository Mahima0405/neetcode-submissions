class Solution {
public:
    string simplifyPath(string path) {
        int i=0;
        path = path + "/";
        int n = path.length();
        string curr= "";
        stack<string> st;
        while(i < n)
        {
            if(path[i] == '/')
            {
                if(curr == "..")
                {
                    if(!st.empty())
                    {
                        st.pop();
                    }
                }
                else if(curr != "." && curr != "")
                {
                    cout<<"2";
                    st.push(curr);
                }
                curr.clear();
            }
            else
            {
                curr += path[i];
            }
            i++;
        }

        string res="";
        while(!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }
        return res.size() == 0? "/": res;
    }
};