/*
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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr)return nullptr;
	    queue<TreeNode*>q;
	    q.push(root);
	    while(!q.empty()){
		    TreeNode* currNode = q.front();
		    // cout<<currNode->val<<endl;
		    q.pop();
            if(currNode->left || currNode->right){
                TreeNode* temp = currNode->left;
                currNode->left = currNode->right;
                currNode->right = temp;
            }
		    if(currNode->left) q.push(currNode->left);
		    if(currNode->right) q.push(currNode->right);
	    }
        return root;
    }
};