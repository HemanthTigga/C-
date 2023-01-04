#include <bits/stdc++.h>
#include <map>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *random;
    Node(int x)
    {
        data = x;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
private:
    void insertAtTail(Node* &head, Node* &tail, int d)
    {
        Node* newNode=new Node(d);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
    }
public:
    Node *copyList(Node *head)
    {
        //step 1: create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        while(temp != NULL)
        {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }
        //step 2: cloneNode add in b/w original list
        Node* originalNode = head;
        Node* cloneNode = clonehead;

        while(originalNode != NULL && cloneNode != NULL)
        {
            Node* next = originalNode ->next;
            originalNode -> next = cloneNode;
            originalNode = next;

            next = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode = next;
        }
        //step 3: random pointer copy
        while(temp != NULL)
        {
            if(temp -> next != NULL){
                if(temp -> random != NULL)
                {
                    temp -> next -> random = temp -> random ->next;
                }
                else
                {
                    temp -> next = temp -> random;
                }
            }
            temp = temp -> next -> next;

        }
        //step 4: revert changes done in step 2
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL)
        {
            originalNode -> next = cloneNode -> next;
            originalNode = cloneNode -> next;

            if(originalNode != NULL)
                cloneNode -> next = originalNode -> next;

            cloneNOde = cloneNode -> next;
        }
        //step 5: return ans;
        return cloneHead;
    }
};

Time Complexity = O(N)
Space Complexity = O(1)
