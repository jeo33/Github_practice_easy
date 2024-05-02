#include<vector>
using namespace std;

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>*path=new vector<int>();
        helper(root,path);
        return *path;
    }

    
    void helper(TreeNode* root,vector<int> *path){
        if(root==nullptr)return;
        path->push_back(root->val);
        if(root->left!=nullptr)helper(root->left,path);
        if(root->right!=nullptr)helper(root->right,path);
    }
};