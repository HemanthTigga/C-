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

Node* minvalue(Node* root)
{
    Node* temp = root;
    while(temp->left!=NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node* maxvalue(Node* root)
{
    Node* temp = root;
    while(temp->right!=NULL)
    {
        temp = temp->right;
    }
    return temp;
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
    cout<<minvalue(root)->data<<endl;
    cout<<maxvalue(root)->data<<endl;
    return 0;
}
