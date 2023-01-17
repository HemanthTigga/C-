//Time Complexity = O(N^2)
#include<stack>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> arr;
        stack<int> s;
        ListNode* temp = head;
        s.push(temp->val);
        temp = temp->next;
        while(temp != NULL)
        {
            if(temp->val > s.top())
            {
                arr.push_back(temp->val);
                s.push(temp->val);
            }
            else
            {
                int k = 0;
                ListNode* temp2 = temp;
                while(temp2 != NULL)
                {
                    if(temp2->val > s.top())
                    {
                        k=1;
                        arr.push_back(temp2->val);
                        break;
                    }
                    temp2 = temp2->next;
                }
                if(k == 0)
                {
                    arr.push_back(0);
                }
                s.push(temp->val);
            }
            temp = temp->next;
        }
        arr.push_back(0);
        return arr;
    }
};
