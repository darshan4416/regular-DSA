class Solution {
public:
    vector<int> ans;
    
    void inorder(TreeNode* node){
        
        if(node==NULL){
            return ;
        }
        
        inorder(node->left);
        ans.push_back(node->val);
        inorder(node->right);
    }
    vector<int> inorderTraversal(TreeNode* node) {
        
        inorder(node);
        return ans;
        
    }
    
    
};
