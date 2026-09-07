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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=0;
        ListNode* temp= head;
        int size= 0;

        while(temp != nullptr)
        {
            temp= temp->next;
            size++;
        }

        n= size-n;
        if(n==0)
        {
            return head->next;
        }

        temp = head;
        ListNode* prvs= temp;
        while(temp != nullptr)
        {
            if(i==n)
            {
                prvs->next= temp->next;
                return head;
            }

            prvs= temp;
            temp= temp->next;
            i++;
        }
        return head;
    }
};
