class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(auto i: operations)
        {
            if(i == "+")
            {
                int num1 = st.top();
                st.pop();
                int num2= st.top();
                int sum= num1+ num2;
                st.push(num1);
                st.push(sum);
            }
            else if(i == "D")
            {
                int num= st.top();
                st.push(num*2);
            }
            else if(i == "C")
            {
                st.pop();
            }
            else{
                st.push(stoi(i));
            }
        }

        int ans=0;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};