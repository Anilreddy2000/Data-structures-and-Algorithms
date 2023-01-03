#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
/*        1
        /   \
       2     3
      / \   / \
     4   5 6   7
     
     Inorder : 4 2 5 1 6 3 7
     Pre-order : 1 2 4 5 3 6 7
     post-order: 4 5 2 6 7 3 1
     level-order : 1 2 3 4 5 6 7 
*/
void inorder(struct Node* node){
    if(!node){
        return ;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);

}
void preOrder(struct Node* node){
    if(!node) return ;
    cout<<node->data<<" ";
    preOrder(node->left);
    preOrder(node->right);
}
void postOrder(struct Node* node){
    if(!node) return ;
    postOrder(node->left);
    postOrder(node->right);
    cout<<node->data<<" ";
}
vector<vector<int>> levelOrder(struct Node* node){
    vector<vector<int>> ans;
    if(!node) return ans;
    queue<Node*> q;
    q.push(node);
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            struct Node* temp=q.front();
            q.pop();
            if(temp->left !=NULL) q.push(temp->left);
            if(temp->right !=NULL) q.push(temp->right);
            level.push_back(temp->data);
        }
        ans.push_back(level);
    }
    return ans;
}
int main(){
    struct Node* root =new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<"In-order traversal : ";
    inorder(root);
    cout<<endl<<"Pre-order traversal : ";
    preOrder(root);
    cout<<endl<<"Post-order traversal  : ";
    postOrder(root);
    cout<<endl;
    cout<<"Level order traversal : ";
    vector<vector<int>> v=levelOrder(root);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
    }
    cout<<endl;
    return 0;
    
}

