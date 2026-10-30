class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n= temperatures.size();
        vector<int> ans;

        stack<pair<int, int>> temp;
        for(int i= n-1; i>=0; i--)
        {
            if(temp.empty())
            {
                temp.push({temperatures[i], i});
                ans.push_back(0);
            }
            else{
                while(!temp.empty() && temp.top().first <= temperatures[i])
                {
                    temp.pop();
                }
                if(temp.empty())
                ans.push_back(0);
                else ans.push_back(temp.top().second - i);
                temp.push({temperatures[i], i});
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};