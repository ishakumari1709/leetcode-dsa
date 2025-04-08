class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        queue<int> q;
        unordered_map<char,int> freq;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(!freq.count(ch)) q.push(i);
            freq[ch]++;
            while(q.size()>0 && freq[s[q.front()]]>1){
                q.pop();
            }
        }
            return q.empty() ? -1 : q.front();
        

        
    }
};