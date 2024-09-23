class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> list;
        help(root,list);
        return list;
    }
    void help(TreeNode* root,vector<int>& list){
        if(root==NULL){
            return;
        }
        help(root->left,list);
        list.push_back(root->val);
        help(root->right,list);
    }
};
