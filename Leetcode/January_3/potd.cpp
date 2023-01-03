class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;

        for(int j=0;j<strs[0].size();j++){
            int mini=0;
            for(int i=0;i<strs.size();i++){
                if(strs[i][j]<mini){
                    count++;
                    break;
                }
                mini=strs[i][j];
            }
        }

        return count;        
    }
};
