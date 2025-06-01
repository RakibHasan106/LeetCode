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
	int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
		stack<TreeNode*>s;
        s.push(root);
        int level=1,maxLevel=0;
        TreeNode* currNode=root;
        map<TreeNode*,int>leftrightvisited;
        while(!s.empty()){
            if(leftrightvisited[currNode]==0){
                if(currNode->left && leftrightvisited[currNode->left]==0){
                    
                    currNode=currNode->left;
                    s.push(currNode);
                    level++;
                }
                else if(currNode->right){
                    
                    leftrightvisited[currNode]=1;
                    currNode=currNode->right;s.push(currNode);
                    level++;
                    
                }
                else{
                    leftrightvisited[currNode]=1;
                }
  
            }else{
             	s.pop();
                level--;
                if(!s.empty()){
                    currNode=s.top();
                }
            	
            }
            
            if(level>maxLevel){
                maxLevel=level;
            }
        }
        return maxLevel;
    }
};
