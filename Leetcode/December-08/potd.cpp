/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traverse_in(TreeNode* root,vector<int> &x){
        if(root->left==NULL && root->right==NULL){
            x.push_back(root->val);
            return;
        }

        if(root->left!=NULL)
            traverse_in(root->left,x);
        
        if(root->right!=NULL)
            traverse_in(root->right,x);

    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> x,y;

        traverse_in(root1,x);
        traverse_in(root2,y);
        
        if(x.size()!=y.size())
            return false;

        for(int i=0;i<x.size();i++){
            cout<<x[i]<<" "<<y[i]<<endl;
            if(x[i]!=y[i])
                return false;
        }

        return true;
    }
};
