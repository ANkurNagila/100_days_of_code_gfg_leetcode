class Solution {
  public:
    vector<int> maximumValue(Node* node) {
        queue<Node*> x;
        
        vector<int> ans;
        
        x.push(node);
        
        while(x.size()!=0){
            int size=x.size();
            int maxi=-1;
            while(size--){
                if(x.front()->left!=NULL)
                    x.push(x.front()->left);
                    
                if(x.front()->right!=NULL)
                    x.push(x.front()->right);
                
                maxi=max(maxi,x.front()->data);
                    
                x.pop();
            }
            
            ans.push_back(maxi);
        }
        
        return ans;
    }
};
