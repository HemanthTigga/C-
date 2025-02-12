#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node(int data)
    {
        this->data=datat;
        this->next=NULL;
    }
};

node* findMid(node *head)
{
    node* slow = head;
    node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

node* Merge(node* left, node* right)
{
    if(right == NULL)
        return left;

    if(left == NULL)
        return right;

    node* ans = new node(-1);
    node* temp = ans;

    //merge 2 sorted LL
    while(left != NULL && right != NULL)
    {
        if(left -> data < right -> data)
        {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else{
            temp -> next =right;
            temp = right ;
            right = right -> next;
        }
    }

    while(left != NULL)
    {
        temp -> next = left;
        temp = left;
        left = left -> next;
    }

    while(right != NULL)
    {
        temp -> next =right;
        temp = right ;
        right = right -> next;
    }

    ans = ans -> next;
}

node* mergesort(node *head)
{
    //base case
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }
    //break linked list into 2 halves, after finding mid
    node* mid = findMid(head);

    node* left = head;
    node* right = mid -> next;
    mid -> next = NULL ;

    //recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);

    //merge both left and right halves
    node* result = Merge(left,right);
    return result;
}

int main()
{
    //input elements
    return 0;
}
