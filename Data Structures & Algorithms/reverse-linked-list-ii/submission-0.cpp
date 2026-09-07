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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
        {
            return head;
        }

        if(head==nullptr || head->next == nullptr)
        {
            return head;
        }

        int i=1;
        ListNode* temp=head;
        ListNode* prvs= nullptr; 

        while(i<left)
        {
            prvs= temp;
            temp= temp->next;
            i++;
        }

        ListNode* start= temp;
        ListNode* leftptr= nullptr;
        ListNode* rightptr;
        while(i>=left && i<=right)
        {
            rightptr= temp->next;
            temp->next= leftptr;
            leftptr= temp;
            temp= rightptr;
            i++;
        }

        start->next= temp;
        if(prvs != nullptr)
        {
            prvs->next = leftptr;
            return head;
        }
        return leftptr;
    }
};