#include<iostream>
#include<malloc.h>
using namespace std;
struct node{
	int val;
	struct node *left,*right;
};
struct node *root=NULL;
struct node *newnode(int n){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->val=n;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void preorder(struct node *root){
	if(root==NULL)	return;
	cout<<root->val<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node *root){
	if(root==NULL)	return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->val<<" ";
}	
void inorder(struct node *root){
	if(root==NULL)	return;
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
}
struct node *create(struct node *node,int n){
	if(node==NULL)	return newnode(n);
	if(n<=node->val)	node->left=create(node->left,n);
	else if(n>node->val)	node->right=create(node->right,n);
	return node;
}
int main(){
	int n,*arr;
	cout<<"Enter the number of elements to be inserted";
	cin>>n;
	arr=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)	cin>>arr[i];
	cout<<"Creating a binary search tree of the elements inserted\n";
	for(int i=0;i<n;i++){
		root=create(root,arr[i]);
	}
	cout<<"Preorder\n";
	preorder(root);
	cout<<"\nInorder\n";
	inorder(root);
	cout<<"\nPostorder\n";
	postorder(root);
}
