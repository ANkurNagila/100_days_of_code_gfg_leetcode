class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> map;

        for(auto it:tasks){
            if(map.find(it)!=map.end()){
                map[it]++;
            }
            else{
                map[it]=1;
            }
        }

        int ans=0;
        for(auto it:map){
            if(it.second==1)
                return -1;
            else{
                if(it.second%3==0){
                    ans+=(it.second)/3;
                }
                else if(it.second%3==1||it.second%3==2){
                    ans+=(it.second/3)+1;
                }
            }
        }

        return ans;
    }
};
