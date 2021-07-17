#include<bits/stdc++.h>

using namespace std;

struct bst{
    int data;
    bst *left;
    bst *right;
};
bst *root;
bst *insert(bst *root, int data)
{
    bst *temp = new bst();
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;

    if(root == NULL)
    {
        root = temp;
        return root;
    }
    else if (data<=root->data)
    {
        root->left=insert(root->left,data);
    }
    else 
    {
        root->right=insert(root->right,data);
    }
    return root;
}
bool search(int data)
{
    if (root== NULL)
    {
        return false;
    }
    if(root->data==data)
    return true;
    else if (data<root->data)

    {
        root=root->left;
        search(data);
    }
    else
    {
        root=root->right;
        search(data);
    }
}
int minbst()
{
    if (root==NULL)
    return -1;
    else
    {
        bst *temp = root;
        while(temp->left!=NULL)
        {
            temp = temp->left;
        }
        return temp->data;
    }
}
int maxbst()
{
    if(root ==NULL)
    return -1;
    else
    {
        bst *temp = root;
        while (temp->right!= NULL)
        {
            temp= temp->right;
        }
        return temp->data;
    }
}
main()
{
    root = NULL;
    for(int i=0;i<5;i++)
    root = insert(root,5);
    root = insert(root,6);
    root = insert(root,4);
    root = insert(root,2);
    
    cout<<minbst();
    cout<<maxbst();
}