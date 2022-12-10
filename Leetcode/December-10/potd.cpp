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
    void sum(TreeNode* root,long long int *x){
        if(root==NULL){
            return ;
        }

        *x+=root->val;
        sum(root->left,x);
        sum(root->right,x);
    }

    long long int help(TreeNode* root,long long int *maxi,long long int *total){
        if(root==NULL)
            return 0;
        
        long long int x=help(root->left,maxi,total);
        long long int y=help(root->right,maxi,total);
        long long int sum=x+y+root->val;

        long long int temp=(*total-sum)*sum;
        *maxi=max(temp,*maxi);
        
        return sum; 

    }

    int maxProduct(TreeNode* root) {
        long long int total=0;
        sum(root,&total);

        long long int maxi=0;
        long long int sum=help(root,&maxi,&total);

        int tmp=1e9+7;
        return maxi%tmp;
    }
};
