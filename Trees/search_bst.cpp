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

//recursive
bool searchInBST(Node* &root, int x)
{
    //base case
    if(root == NULL)
    {
        return false;
    }
    if(root->data == x)
    {
        return true;
    }

    if(root->data > x)
    {
        //left part
        return searchInBST(root->left,x);
    }
    else
    {
        //right part
        return searchInBST(root->right,x);
    }
}

//itertive
bool searchInBSTiterative(Node* &root, int x)
{
    Node* temp = root;
    while(temp!=NULL)
    {
        if(temp->data == x)
        {
            return true;
        }
        if(temp->data >x)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return false;
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
    takeinput(root);

    if(searchInBSTiterative(root,15))
        cout<<"present"<<endl;
    else
        cout<<"Not present"<<endl;
}
