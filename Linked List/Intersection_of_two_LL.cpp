#include<iostream>
using namespace std;
class Solution {

    struct ListNode {
       int val;
       ListNode *next;
       ListNode(int x) : val(x), next(NULL) {}
   };
public:
    ListNode *getIntersection(int d,ListNode *headA,ListNode *headB)
    {
        while(d--)
        {
            headA = headA->next;
        }
        while(headA != NULL)
        {
            if(headA == headB)
            {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }

    int getCount(ListNode *head)
    {
        int c=0;
        ListNode *temp = head;
        while(temp != NULL)
        {
            c++;
            temp = temp->next;
        }
        return c;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cA = getCount(headA);
        int cB = getCount(headB);
        int d;
        if(cA > cB)
        {
            d = cA-cB;
            return getIntersection(d,headA,headB);
        }
        else
        {
            d = cB-cA;
            return getIntersection(d,headB,headA);
        }
        return NULL;
    }
};
int main()
{
    //code here

    return 0;
}
