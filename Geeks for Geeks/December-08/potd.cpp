class Solution
{
public:
    bool is_prime(int N){
        int i=2;
        for(;i<=sqrt(N);i++){
            if(N%i==0)
                return false;
        }
        
        return true;
    } 

    vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector<int> ans;
        
        for(auto it:query){
            int val=sqrt(it);
            
            int count=0;
            
            for(int i=2;i<=val;i++){
                if(is_prime(i) && i*i<=it){
                        count++;
                }
                else
                    continue;
            }
            
            ans.push_back(count);
        }
        
        return ans;
    }
};
