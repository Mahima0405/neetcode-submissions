class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp=0;
        int sp=1;
        int profit = 0;

        if(prices.size() <= 1)
        {
            return 0;
        }

        while(sp<prices.size())
        {
            if(prices[bp] > prices[sp])
            {
                bp = sp;
                sp++;
            }
            else{
                profit = max(profit, (prices[sp]-prices[bp]));
                sp++;
            }
        }

        return profit;
    }
};
