#include<bits/stdc++.h>
using namespace std;
struct treeNode{
    int val;
    treeNode* left;
    treeNode* right;
    treeNode(int val=0,treeNode* left=nullptr,treeNode* right=nullptr):val(val),left(left),right(right){}
};
void preorder_traverse_using_loop(treeNode* root){
    if(root==nullptr){
        return;
    }
    stack<treeNode*>s;
    s.push(root);
    while(!s.empty()){
        treeNode* node = s.top();
        s.pop();
        cout<<node->val<<endl;
        
        if(node->right)s.push(node->right);
        if(node->left)s.push(node->left);
    }   

}
void preorder_traverse_using_recursion(treeNode* root){
    if(root==nullptr){
        return;
    }
    cout<<root->val<<endl;
    preorder_traverse_using_recursion(root->left);
    preorder_traverse_using_recursion(root->right);
}
void inorder_using_recursion(treeNode* root){
	if(root==nullptr)return;
	inorder_using_recursion(root->left);
	cout<<root->val<<endl;
	inorder_using_recursion(root->right);
}

int main(){
    treeNode Tree = treeNode(1);
    Tree.left = new treeNode(2);
    Tree.right = new treeNode(3);
    Tree.left->left = new treeNode(4);
    Tree.left->right = new treeNode(5);
    Tree.right->left = new treeNode(6);
    Tree.right->right = new treeNode(7);
    Tree.left->left->left = new treeNode(8);
    Tree.left->left->right = new treeNode(9);
    Tree.left->right->left = new treeNode(10);
    Tree.left->right->right = new treeNode(11);
    Tree.right->left->left = new treeNode(12);
    Tree.right->left->right = new treeNode(13);
    Tree.right->right->left = new treeNode(14);
    Tree.right->right->right = new treeNode(15);

    inorder_using_recursion(&Tree);
}