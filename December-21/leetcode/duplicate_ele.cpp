class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> x;
        vector<int> ans;

        for(auto it:nums){
                x[it]++;
        }

        for(auto it:x){
            if(it.second>1)
                ans.push_back(it.first);
        }

        return ans;
    }
};
