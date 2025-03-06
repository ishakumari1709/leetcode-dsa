class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map < int , int> map;
        int answer = 0;
        for(int i = 0 ;i < answers.size();i++){
            if(map.find(answers[i])!=map.end()){
                if(map[answers[i]]==0){
                    answer=answer+answers[i] +1;
                    map[answers[i]]=answers[i];
                }else{
                    map[answers[i]]--;
                }
            }else{
                map[answers[i]] = answers[i];
                answer  = answer + answers[i] + 1;
            }

        }
        return answer;

    }
};