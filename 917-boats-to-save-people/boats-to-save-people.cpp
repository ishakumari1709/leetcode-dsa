class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int start=0;
        int end=people.size()-1;
        int boats=0;
        sort(people.begin(),people.end());
        while(start<=end){
            if(people[end]+people[start]<=limit){
                boats++;
                start++;
                end--;
            }else if(people[end]<=limit){
                boats++;
                end--;
            }else{
                start++;
                end--;
              
            }

        }
        return boats; 
        
    }
};