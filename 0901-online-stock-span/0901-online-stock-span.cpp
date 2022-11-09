class StockSpanner {
public:
    vector<int> v;
    int size_of_stock;
    
    StockSpanner() {
        
        size_of_stock=0;
        
        
    }
    
    int next(int price) {
        v.push_back(price);
        
        int ans=1;
        
        for(int i=size_of_stock-1;i>=0;i--)
        {
            if(v[i]<=price)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        size_of_stock++;
        return(ans);
        
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */