#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int x){
		data=x;
		left=right=NULL;
	}
};
void preOrder(struct Node* p){
	if(!p) return ;
	cout<<p->data<<" ";
	preOrder(p->left);
	preOrder(p->right);

}
void inOrder(struct Node* p){
	if(!p) return ;
	inOrder(p->left);
	cout<<p->data<<" ";
	inOrder(p->right);

}
void postOrder(struct Node* p){
	if(!p) return ;
	postOrder(p->left);
	postOrder(p->right);
	cout<<p->data<<" ";

}
void levelOrder(struct Node* p){
	if(!p) return ;
	queue<Node*> q;
	q.push(p);
	while(!q.empty()){
		int size=q.size();
		for(int i=0;i<size;i++){
			struct Node* temp = q.front();
			q.pop();
			if(temp->left !=NULL) q.push(temp->left);
			if(temp->right !=NULL) q.push(temp->right);
			cout<<temp->data<<" ";
		}
	}
}
//Maximum Depth in Binary Tree | Height of Binary Tree | C++ 
int heightOfTree(struct Node* h){
	if(!h) return 0;
	int lh=heightOfTree(h->left);
	int rh=heightOfTree(h->right);
	return 1+max(lh,rh);
}
// Check for Balanced Binary Tree | C++ |
int Balanced_Binary_tree(struct Node* p){
	if(!p) return 0;
	
}
int main(){
	struct Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	root->left->left->left=new Node(11);
	preOrder(root);cout<<endl;
	inOrder(root);cout<<endl;
	postOrder(root);cout<<endl;
	levelOrder(root);cout<<endl;
	//cout<<"height of binary tree : "<<heightOfTree(root)<<endl;
	return 0;
}