class StockSpanner {
public:
    stack<pair<int,int>> stk1;
    
    
    StockSpanner() {
        
        
        
        
    }
    
    int next(int price) {
        
        int ans=1;
        
        while(stk1.empty()==false && stk1.top().first<=price)
        {
            ans+=(stk1.top().second);
            stk1.pop();
        }
        stk1.push({price,ans});
        
        return(ans);
        
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */