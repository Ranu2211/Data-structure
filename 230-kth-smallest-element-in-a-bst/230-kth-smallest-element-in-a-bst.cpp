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
    private:
    vector<int>tree;
public:
    void inorder(TreeNode* root){
        if(root==NULL)
            return ;
        inorder(root->left);
        tree.push_back(root->val);
        inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)
            return -1;
        inorder(root);
       // for(int i=1;i<=k;i++){
       int ans = tree[k-1];
        //}
        return ans;
    }
};