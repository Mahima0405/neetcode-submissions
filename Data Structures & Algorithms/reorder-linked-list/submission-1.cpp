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
    ListNode* reverse(ListNode* root)
    {
        ListNode* temp= nullptr;
        ListNode* nextptr= root->next;

        while(root != nullptr)
        {
            root->next= temp;
            temp=root;
            root= nextptr;
            nextptr= nextptr == nullptr? nullptr: nextptr->next;
        }

        return temp;
    }

    void reorderList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        {
            return;
        }

        ListNode* fast= head;
        ListNode* mid= head;
        ListNode* prvs= head;

        while(fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            prvs= mid;
            mid= mid->next;
        }

        prvs-> next= nullptr;
        ListNode* list2= reverse(mid);
        ListNode* list1= head;
        ListNode* temp= head;
        
        while(list1 != nullptr && list2 != nullptr)
        {
            list1= list1->next;
            temp->next= list2;
            list2= list2->next;
            temp= temp->next;
            if(list1 != nullptr)
            {
                temp->next= list1;
                temp= temp->next;
            }
        }
    }
};
