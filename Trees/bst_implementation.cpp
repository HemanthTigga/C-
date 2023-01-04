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

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp = q.front();
        cout<<temp -> data<< " ";
        q.pop();
        //cout<<"temp->left"<<temp->left<<endl;
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

void inorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

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

Node* minvalue(Node* root)
{
    Node* temp = root;
    while(temp->left!=NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val)
{
    //base case
    if(root == NULL)
    {
        return root;
    }

    if(root->data == val)
    {
        //0 child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        //1 child

        //left child
        if(root->left != NULL && root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left == NULL && root->right != NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL)
        {
            int mini = minvalue(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }
    }
    else if(root->data >val)
    {
        root->left = deleteFromBST(root->left,val);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right,val);
        return root;
    }
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
    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"Inorder"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder"<<endl;
    postorder(root);
    cout<<endl;
    levelOrderTraversal(deleteFromBST(root, 50));
    return 0;
}
