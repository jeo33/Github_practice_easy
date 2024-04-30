class Solution {
public:
    int depth(TreeNode* root) {
        if (root == nullptr) return 0;
        
        int left = depth(root->left);
        if (left == -1) return -1; 
        
        int right = depth(root->right);
        if (right == -1) return -1; 
        
        if (abs(left - right) > 1) return -1;
        
        return max(left, right) + 1; 
    }
    
    bool isBalanced(TreeNode* root) {
        return depth(root) != -1;
    }
};