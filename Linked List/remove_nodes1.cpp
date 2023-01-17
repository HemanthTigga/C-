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
        temp = head;
        ListNode* next1 = NULL;
        while(temp != NULL)
        {
            next1 = temp->next;
            while(next1 != NULL)
            {
                if(temp->val < next1->val)
                {
                    temp->val = -1;
                    break;
                }
                next1 = next1->next;
            }
            temp = temp->next;
        }

        temp = head;
        next1 = head;
        while(temp != NULL)
        {
            if(temp->val != -1)
            {
                next1->val = temp->val;
                temp->val = -1;
                next1 = next1->next;
            }
            temp = temp->next;
        }
        temp = head;
        while(temp != NULL)
        {
            if(temp->next->val == -1)
            {
                temp->next = NULL;
            }
            temp = temp->next;
        }
        return head;
    }
};
