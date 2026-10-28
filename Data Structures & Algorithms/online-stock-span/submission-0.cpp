class StockSpanner {
public:
    stack<pair<int, int>> stockSpan;
    StockSpanner() {}
    
    int next(int price) {
        int span= 1;
        while(!stockSpan.empty() && stockSpan.top().first <= price)
        {
            span += stockSpan.top().second;
            stockSpan.pop();
        }

        stockSpan.push({price, span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */