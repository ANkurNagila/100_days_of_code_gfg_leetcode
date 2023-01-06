class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());

        int ans=0;
        for(auto it:costs){
            if(it>coins){
                return ans;
            }
            else{
                ans++;
                coins-=it;
            }
        }
        return ans;
    }
};
