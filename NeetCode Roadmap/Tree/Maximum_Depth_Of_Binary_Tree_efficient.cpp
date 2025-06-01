//using BFS
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        queue<TreeNode*> q;
        int depth=0;
        q.push(root);
        while(!q.empty()){
            depth++;
            int len = q.size();
            for(int i=0;i<len;i++){
                TreeNode* currNode = q.front();
                q.pop();
                if(currNode->left)q.push(currNode->left);
                if(currNode->right)q.push(currNode->right);
            }
        }
        return depth;
    }
};