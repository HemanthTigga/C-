#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"enter data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter data for inserting in left: "<<data<<endl;
    root -> left =buildTree(root->left);
    cout<<"Enter data for inserting in right: "<<data<<endl;
    root -> right =buildTree(root->right);
    return root;
}

//output in  straight line
void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        cout<<temp -> data<< " ";
        q.pop();

        if(temp -> left)
        {
            q.push(temp->left);
        }

        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}
void inorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

int main()
{
    node* root = NULL;
    root = buildTree(root);
    return 0;
}
