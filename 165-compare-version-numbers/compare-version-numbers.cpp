class Solution {
public:
    int compareVersion(string version1, string version2) {
        for(int i=0, j=0; i<version1.length() || j<version2.length();i++,j++){
           unsigned int val1=0;
            unsigned int val2=0;
            while(i<version1.length()&& version1[i]!='.'){
                val1=(val1*10+version1[i++]-'0');
            }
            while(j<version2.length()&& version2[j]!='.'){
                val2=(val2*10+version2[j++]-'0');
            }
            if(val1<val2){
                return -1;
            }
            else if(val1>val2){
                return 1;
            }
        }
        return 0;
    }
};