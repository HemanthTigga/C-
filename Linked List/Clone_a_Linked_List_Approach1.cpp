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
    Node *copylist(Node *head)
    {
        //step 1:create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        while(temp != NULL)
        {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }

        //Step2: Create a map(unordered map)
        unordered_map<Node*, Node*> oldToNewNode;
        Node* originalNode  =head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL)
        {
            oldToNewNode[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        originalNode = head;
        cloneHead = cloneHead;
        while(originalNode != NULL)
        {
            cloneNode -> random = oldToNewNode[originalNode -> random];
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        return cloneHead;
    }
};

Time Complexity = O(N)
Space Complexity = O(N)
