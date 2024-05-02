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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> *path=new vector<int>();
        helper(root,path);
        return *path;
    }
    void helper(TreeNode* root,vector<int> *path){
        if(root==nullptr)return;
        if(root->left!=nullptr)helper(root->left,path);
        if(root->right!=nullptr)helper(root->right,path);
        path->push_back(root->val);
    }
};