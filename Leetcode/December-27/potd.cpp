class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> temp;

        for(int i=0;i<rocks.size();i++){
            temp.push_back(capacity[i]-rocks[i]);
        }

        sort(temp.begin(),temp.end());
        int ans=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]==0){
                ans++;
            }
            else{
                if(additionalRocks>=temp[i]){
                    additionalRocks-=temp[i];
                    ans++;
                }
                else{
                    break;
                }
            }
        }

        return ans;
    }
};
