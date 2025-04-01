class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st;
        stack<int> tt;
        for( char ch : s){
            if(ch=='#' && !st.empty()){
                st.pop();
            }else if(ch!='#'){
                st.push(ch);
            }
        }
        for( char ch : t){
            if(ch=='#' && !tt.empty()){
                tt.pop();
            }else if(ch!='#'){
                tt.push(ch);
            }
        }
        return st==tt;



     
        
    }
};