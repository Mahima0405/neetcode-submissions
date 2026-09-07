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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr)
        {
            return l2;
        }

        if(l2 == nullptr)
        {
            return l1;
        }
        ListNode* newHead= new ListNode(0);
        int carry=0;
        ListNode* temp = newHead;
        while(l1 != nullptr && l2 != nullptr)
        {
            int res= l1->val+l2->val+carry;
            ListNode* newNode= new ListNode(res%10);
            carry= res/10;
            temp->next= newNode;
            temp= temp->next;
            l1= l1->next;
            l2= l2->next;
        }

        while(l1 != nullptr)
        {
            int res= l1->val+carry;
            temp->next= new ListNode(res%10);
            carry= res/10;
            l1= l1->next;
            temp= temp->next;
        }

        while(l2 != nullptr)
        {
            int res= l2->val+carry;
            temp->next= new ListNode(res%10);
            carry= res/10;
            l2= l2->next;
            temp= temp->next;
        }

        if(carry != 0)
        {
            temp->next= new ListNode(carry);
        }

        return newHead->next;
    }
};
