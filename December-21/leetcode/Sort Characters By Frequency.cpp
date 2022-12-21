class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;

        for(int i=0;i<s.size();i++){
            if(map.find(s[i])!=map.end()){
                map[s[i]]+=1;   
            }
            else
                map[s[i]]=1;
        }

        priority_queue<pair<int,char>> x;
        for(auto it:map){
            x.push({it.second,it.first});
        }

        string ans="";
        while(x.size()!=0){
            pair<int,char> temp=x.top();
            while(temp.first!=0){
                temp.first--;
                ans+=temp.second;
            }
            x.pop();
        } 

        return ans;
    }
};
