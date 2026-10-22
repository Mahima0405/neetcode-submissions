class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> calculation;
        if(tokens.size() == 1)
        {
            return std::stoi(tokens[0]);
        }

        calculation.push(std::stoi(tokens[0]));
        calculation.push(std::stoi(tokens[1]));

        for(int i=2; i<tokens.size(); i++)
        {
            if(tokens[i] == "+")
            {
                int num1= calculation.top();
                calculation.pop();
                int num2= calculation.top();
                calculation.pop();
                calculation.push(num1+num2);
            }
            else if(tokens[i] == "-")
            {
                int num1= calculation.top();
                calculation.pop();
                int num2= calculation.top();
                calculation.pop();
                calculation.push(num2-num1);
            }
            else if(tokens[i] == "*")
            {
                int num1= calculation.top();
                calculation.pop();
                int num2= calculation.top();
                calculation.pop();
                calculation.push(num1*num2);
            }
            else if(tokens[i] == "/")
            {
                int num1= calculation.top();
                calculation.pop();
                int num2= calculation.top();
                calculation.pop();
                calculation.push(num2/num1);
            }
            else{
                calculation.push((std::stoi(tokens[i])));
            }
        }
        return calculation.top();
    }
};
