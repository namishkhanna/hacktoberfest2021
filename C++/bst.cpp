#include <bits/stdc++.h>
using namespace std;


struct node
{
    int key;
    node *left;
    node *right;
}*root=NULL;

node* insert(node* root,int key)
{
    if(root==NULL)
    {
        node *ptr=new node;
        ptr->left=NULL;
        ptr->right=NULL;
        ptr->key=key;
        return ptr;
    }
    else if(key<root->key)
    {
        root->left=insert(root->left,key);
    }
    else
    {
        root->right=insert(root->right,key);
    }
    return root;
}

void inorder(node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<endl;
        inorder(root->right);
    }
}

void preorder(node* root)
{
    if(root!=NULL)
    {
        cout<<root->key<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<endl;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif


    int n,x;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        root = insert(root,x);
    }

    cout<<"-----------------------"<<endl;

    inorder(root);

    cout<<"-----------------------"<<endl;

    preorder(root);
    
    cout<<"-----------------------"<<endl;

    postorder(root);
    
    return 0;
}