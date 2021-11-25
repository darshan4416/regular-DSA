class Solution {
public:
     vector<int> ans;
    void postorder(TreeNode* node){
        
        if(node==NULL){
            return ;
        }
        
        postorder(node->left);
        postorder(node->right);
        ans.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        
        postorder(root);
        return ans;
    }
