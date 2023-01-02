class Solution {
public:
    bool detectCapitalUse(string s) {
        
        int count=0;
        int f=0;

        for(int i=0;s[i]!='\0';i++){
            if(s[i]>=65 && s[i]<=90){
                count++;
                if(f==1)
                    return false;
            }
            else{
                f=1;
            }
        }

        if(count==s.size() || count==1 || count==0)
            return true;
        
        return false;
    }
};
