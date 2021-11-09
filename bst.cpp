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
int minbst(bst *root)
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
int maxbst(bst *root)
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
    if (root == NULL) return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

void printPostorder(bst *root)
{
    if(root == NULL) return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}

void printPreorder(bst *root)
{
    if (root == NULL) return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
bool checkBST(bst *root)
{
    if (root == NULL) return true;
    if (root->left== NULL && root->right== NULL)
    {
        return true;
    }
    if (root->left!= NULL&& root->data>= maxbst(root->left))
    {
        return true;
    }
    if (root->right!= NULL && root->data< minbst(root->right))
    {
        return true;
    }
    checkBST(root->left);
    checkBST(root->right);
    return false;
}



main()
{
    root = NULL;
    int a[]={15,20,17,13,12,14,18,25,10,11,9,30};

    for(int i=0;i<12;i++)
    {
        root=insert(root,a[i]);
    }
    
    cout<<minbst(root)<<endl;
    cout<<maxbst(root)<<endl;
    cout<<findHeight(root)<<endl;
    printInorder(root);
    cout<<endl;
    printPreorder(root);
    cout<<endl;
    printPostorder(root);
    cout<<endl;
    printLevelOrder(root);
    cout<<endl;
    cout<<checkBST(root);
}