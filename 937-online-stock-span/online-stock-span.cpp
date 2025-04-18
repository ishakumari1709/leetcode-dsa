class StockSpanner {
public:
stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count=1;
        while(!st.empty() && st.top().first <=price){
            count+=st.top().second;
            st.pop();
        }
        st.push({price,count});
        return count;
        
    }
};
/*Initialize an empty stack to store (price, span).

For each new price:

Start with span = 1 (today counts).

While the stack is not empty and top price ≤ current price:

Pop the top and add its span to the current span.

Push the current (price, span) to the stack.

Return the span.*/

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */