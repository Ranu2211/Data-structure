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
       vector<int> postorder;
        if(root == NULL) return postorder;
        stack<TreeNode*> st1;
        TreeNode* current = root;  
        while(current != NULL || !st1.empty()) {
            if(current != NULL){
                st1.push(current);
                current = current->left;
            }else{
                TreeNode* temp = st1.top()->right;
                if (temp == NULL) {
                    temp = st1.top();
                    st1.pop(); 
                    postorder.push_back(temp->val);
                    while (!st1.empty() && temp == st1.top()->right) {
                        temp = st1.top();
                        st1.pop(); 
                        postorder.push_back(temp->val);
                    }
                } else {
                    current = temp;
                }
            }
        }
        return postorder;
    }
};