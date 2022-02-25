class StockSpanner {
public:
    stack<pair<int, int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
         int  ans = 1;
         while(!st.empty() and  price>=st.top().first){
                 ans += st.top().second;
                 st.pop();
                 
         }
            
           // if(st.empty()) ans =1;
            st.push({price, ans});
            return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */