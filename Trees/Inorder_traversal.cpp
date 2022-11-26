class Solution {
public:
void inordertraversal(TreeNode* root, vector<int> &ans){

        

        if(root == NULL){

         return;

        }

         inordertraversal(root->left , ans);

         ans.push_back(root -> val);

         inordertraversal(root -> right,ans);        

    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;

        inordertraversal(root,ans);

         return ans;
    }
};
