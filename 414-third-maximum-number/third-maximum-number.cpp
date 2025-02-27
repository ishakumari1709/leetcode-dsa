class Solution {
public:
    int thirdMax(vector<int>& nums) {
       long long a,b,c;
        a=b=c=LONG_MIN;

        for(auto& x: nums)
        {
            if(x==a||x==b||x==c) 
                continue;
            else if(x>a){
                c=b;
                b=a;
                a=x;
            }
            else if(x>b){
                c=b;
                b=x;
            }
            else if(x>c){
                c=x;
            }
        }
        return c!=LONG_MIN ? c:a;

        
    }
};