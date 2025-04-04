class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        vector<int> count;
        for(auto &pair: map){
            count.push_back(pair.second);
        }
        sort(count.rbegin(),count.rend());
        int removed=0;
        int size=0;
        int half=arr.size()/2;
        for(int i=0;i<arr.size();i++){
            removed+=count[i];
            size++;
            if(removed>=half){
                break;
            }
        }

        return size;
    }
};