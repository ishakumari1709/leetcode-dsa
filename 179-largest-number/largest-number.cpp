class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        for(int i=0;i<nums.size();i++){
          str.push_back(to_string(nums[i]));
        }
        sort(str.begin(), str.end(), [](string &a, string &b) {
        return a + b > b + a;
        });
        if(str[0]=="0") return "0";
        string result;
        for(int i=0;i<str.size();i++){
            result+=str[i];
        }
        return result;
    }
};