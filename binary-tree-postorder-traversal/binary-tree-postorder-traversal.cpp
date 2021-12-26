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
        vector<int>out;
        if(root==NULL){
            return out  ;
        }
        
        stack<TreeNode*>st;
        st.push(root);
        stack<TreeNode*>post;
        while(!st.empty()){
            TreeNode* curr = st.top();
            st.pop();
            post.push(curr);
            if(curr->left)
                st.push(curr->left);
            
            if(curr->right)
                st.push(curr->right);
            
        }
        while(!post.empty()){
            out.push_back(post.top()->val);
            post.pop();
        }
        return out;
    }  
    
};