class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool s1flag =true;
        bool s2flag=true;
        if(s1.size()!=s2.size()) return false;
        for(int i=0;i<s1.size();i++){
            if(s1[i]<s2[i]){
                 s1flag=false;
            }
            if(s2[i]<s1[i]){
               s2flag =false;  
            }
        }
        if(s1flag==true || s2flag==true) {
            return true;
        } else{
        return false;
        }
        
    }
};