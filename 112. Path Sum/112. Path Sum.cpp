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
    bool hasPathSum(TreeNode* root, int targetSum) {
        std::vector<std::vector<int>> allpath=deepth_sum(root);
        
        for(auto s:allpath){
            int sum=0;
            for(auto i:s){
                sum+=i;
            }
            if(sum==targetSum)return true;  
        }
        return false;    
    }

    std::vector<std::vector<int>> deepth_sum(TreeNode* root){
        std::vector<int> path;
        std::vector<std::vector<int>> allpath;
        path_helper(root,path,allpath);
        return allpath;
    }
    
    void path_helper(TreeNode* root,std::vector<int> &path,std::vector<std::vector<int>> &allpath){
        if(root==nullptr)return;
        path.push_back(root->val);
        if(root->left==nullptr & root->right==nullptr){
            allpath.push_back(path);
        }
        path_helper(root->left,path,allpath);
        path_helper(root->right,path,allpath);
        path.pop_back();
    }
};