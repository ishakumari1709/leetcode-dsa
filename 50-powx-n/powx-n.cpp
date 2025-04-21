class Solution {
public:
   double calculate(double x,  long long n){
    if(n==0) return 1;
    if(n==1) return x;
    if(n<0) return 1/ calculate(x,-n);
    double T=calculate(x,n/2);
    if(n%2!=0) return x*T*T;
    else return T*T;
      
   }
    double myPow(double x, int n) {
        return calculate(x,(long long)n);

        
    }
};