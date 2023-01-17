#include<iostream>
using namespace std;

/* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//Time Complexity = O(N^2)

class Solution {
public:

    int getsize(ListNode* head)
    {
        ListNode* temp = head;
        int c=0;
        while(temp != NULL)
        {
            c++;
            temp = temp->next;
        }
        return c;
    }

    ListNode* getreverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        if(head->next == NULL)
        {
            return head;
        }
        ListNode* temp = head;
        int d = temp->val;
        int c=1;
        temp = temp->next;

        while(temp != NULL)
        {
            if(temp -> val == d)
            {
                c++;
            }
            temp = temp->next;
        }

        int size = getsize(head);
        cout<<"c= "<<c<<endl;
        cout<<"size= "<<size<<endl;
        if(size == c){
            return head;
        }
        temp = getreverse(head);
        ListNode* temp2 = temp;
        ListNode* temp3 = temp;
        int max=0;
        while(temp != NULL)
        {
            if(temp->val >= max)
            {
                max = temp->val;
                temp->val = -1;
                temp2->val = max;
                temp2 = temp2->next;
            }
            else
            {
                temp->val = -1;
            }
            temp = temp->next;
        }

        temp = temp3;
        while(temp != NULL)
        {
            if(temp->next->val == -1)
            {
                temp->next = NULL;
            }
            temp = temp->next;
        }
        temp = getreverse(temp3);
        return temp;
    }
};
