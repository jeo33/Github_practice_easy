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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> all;
        vector<int> temp;
        printTreePaths(root,temp,all);
        return all;
    }
    void printTreePaths(TreeNode *root, vector<int>& path, vector<string>& paths){
            if (!root) return;
    
    path.push_back(root->val);
    
    if (!root->left && !root->right) {
        string sPath;
        for (int i = 0; i < path.size() - 1; ++i) {
            sPath += to_string(path[i]);
            sPath += "->";
        }
        sPath += to_string(path[path.size() - 1]);
        paths.push_back(sPath);
    }
    
    printTreePaths(root->left, path, paths);
    printTreePaths(root->right, path, paths);
    
    path.pop_back();
    }
};
