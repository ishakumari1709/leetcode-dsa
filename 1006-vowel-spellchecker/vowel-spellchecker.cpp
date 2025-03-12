class Solution {
public:
   bool isVowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    string key(string str){
        string retStr;
        for(int i=0;i<str.length();i++){
            if(isVowel(str[i]))
                retStr.push_back('*');
            else
                retStr.push_back(str[i]);
        }
        return retStr;
    }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        
        unordered_map<string,string> um; 
        unordered_map<string,bool> isPresent;
        for(int i=0;i<wordlist.size();i++){
            isPresent[wordlist[i]]=true;
            string s=wordlist[i];
            transform(s.begin(),s.end(),s.begin(),
                                       [](unsigned char c){ return std::tolower(c); } );
            string lower_str=s;
            if(um.find(lower_str)==um.end())
                um[lower_str]=wordlist[i];
            
            string strKey=key(lower_str);
            if(um.find(strKey)==um.end())
                um[strKey]=wordlist[i];
        }
        vector<string> ans;
        for(int i=0;i<queries.size();i++){
            if(isPresent[queries[i]]){
                ans.push_back(queries[i]);
                continue;
            }
            string s=queries[i];
            transform(s.begin(),s.end(),s.begin(),
                                       [](unsigned char c){ return std::tolower(c); }
                  );
            string lower_str=s;
            if(um.find(lower_str)!=um.end()){
                ans.push_back(um[lower_str]);
                continue;
            }
            
            string strKey=key(lower_str);
            if(um.find(strKey)!=um.end()){
                ans.push_back(um[strKey]);
                continue;
            }
            ans.push_back("");
        }
        return ans;
        
    }
};