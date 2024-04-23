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

    int countNodes(ListNode* head)
    {
        int cnt=0;
        while(head!=nullptr)
        {
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt= countNodes(head);
        int position= cnt-n;
        if (position == 0) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

        ListNode* ptr = head;
        for(int i=1; i<position; i++)
        {
            ptr=ptr->next;
        }
        ListNode* ptr2 = ptr->next;
        ptr->next = ptr->next->next;
        delete ptr2;
        return head;
    }
};