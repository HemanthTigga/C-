#include<iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

pair<int,int> predecessorSuccessor(Node* root, int key)
{
    Node* temp = root;
    int pred = -1;
    int succ = -1;
    while(temp->data != key)
    {
        if(temp->data > key)
        {
            succ = temp->data;
            temp = temp->left;

        }
        else
        {
            pred = temp->data;
            temp = temp->right;

        }
    }

    //pred and succ

    //pred
    Node* leftTree = temp->left;
    while(leftTree != NULL)
    {
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    //succ
    Node* rightTree = temp->right;
    while(rightTree != NULL)
    {
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

    /*pair<int,int> ans = make_pair(pred,succ);
    return ans;*/

    return {pred,succ};
}

Node* insertIntoBST(Node* &root, int d)
{
    //base case
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if(d>root -> data)
    {
        //right part insert
        root->right = insertIntoBST(root->right,d);
    }
    if(d<root ->data)
    {
        //left part insert
        root->left = insertIntoBST(root->left,d);
    }

    return root;
}

void takeinput(Node* &root)
{
    int data;
    cin>>data;
    while(data != -1)
    {
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

int main()
{
    Node* root = NULL;
    cout<<"enter data to create bst"<<endl;
    takeinput(root);
    pair<int,int> ans = predecessorSuccessor(root, 3);
    cout<<"ans= ";//<<ans<<endl;
    return 0;
}
