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
int findHeight(bst *root)
{
    if(root == NULL)
    return -1;
    else
    {
        int lheight = findHeight(root->left);
        int rheight = findHeight(root->right);
        return max(lheight,rheight)+1;
    }
}
void printLevelOrder(bst *root)
{
    if (root ==NULL) return;
    queue <bst *> Q;
    Q.push(root);
    while(!Q.empty())
    {
        bst *temp = Q.front();
        cout<<temp->data<<" ";
        Q.pop();
        if (temp->left!= NULL) Q.push(temp->left);
        if (temp->right!=NULL) Q.push(temp->right);
    }
}
void printInorder(bst *root)
{
    if(root == NULL)
    return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
void printPreorder(bst *root)
{
    if(root == NULL)
    return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
void printPostorder(bst *root)
{
    if(root == NULL)
    return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}

main()
{
    root = NULL;
    root = insert(root,5);
    root = insert(root,6);
    root = insert(root,4);
    root = insert(root,2);
    root = insert(root,1);
    root = insert(root,3);
    root = insert(root,7);
    root = insert(root,9);
    root = insert(root,8);
    
    cout<<minbst()<<endl;
    cout<<maxbst()<<endl;
    cout<<findHeight(root)<<endl;
    printInorder(root);
    cout<<endl;
    printPreorder(root);
    cout<<endl;
    printPostorder(root);
    cout<<endl;
    printLevelOrder(root);
}