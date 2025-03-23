class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int> prefixSum(n+1,0);
        vector<int> vowel(n,0);
        vector<int> result(queries.size(),0);
        unordered_set<char> isVowel = {'a', 'e', 'i', 'o', 'u'};
       for(int i=0;i<n;i++){
        if(isVowel.count(words[i].front()) && isVowel.count(words[i].back())){
            vowel[i]=1;
        }else{
            vowel[i]=0;
        }
       }
       for(int i=1;i<=n;i++){
         prefixSum[i]=prefixSum[i-1]+vowel[i-1];
       }
       for(int i=0;i<queries.size();i++){
            int left=queries[i][0];
            int right=queries[i][1];
            result[i]=prefixSum[right+1]-prefixSum[left];

       }
       return result;
        
    }
};