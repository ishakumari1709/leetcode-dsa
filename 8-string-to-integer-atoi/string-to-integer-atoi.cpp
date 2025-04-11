class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        int sign=1;
        int i=0;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            sign=-1;
            i++;
        }else if(s[i]=='+'){
            sign=1;
            i++;
        }
        if(!s[i]>='0' && !s[i]<='9') return 0;
        
        while(s[i]>='0' && s[i]<='9'){
            ans=ans*10+(s[i]-'0'); //char to int;
            if(sign*ans>INT_MAX) return INT_MAX;
         if(sign*ans<INT_MIN) return INT_MIN;
        
           
            i++;
        }
         
        return sign*ans;
        
    }
};