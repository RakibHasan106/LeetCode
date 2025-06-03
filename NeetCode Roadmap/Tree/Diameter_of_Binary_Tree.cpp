#include<bits/stdc++.h>
using namespace std;
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
    int findMaxDepth(TreeNode* root){
        
        if(root==nullptr){
            return 0;
        }
        return 1+max(findMaxDepth(root->left),findMaxDepth(root->right));

    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        queue<TreeNode*>s;
        s.push(root);
        int maxDiameter=0;
        while(!s.empty()){
            int len = s.size();
            for(int i=0;i<len;i++){
                TreeNode* currNode = s.front();
                if(currNode->left)s.push(currNode->left);
                if(currNode->right)s.push(currNode->right);
                int left = findMaxDepth(currNode->left);
                int right = findMaxDepth(currNode->right);
                int diameter = left+right;
                if(diameter>maxDiameter){
                    maxDiameter = diameter;
                }
                s.pop();
            }
        }
        return maxDiameter;
    }
};
int main(){

    return 0;
}