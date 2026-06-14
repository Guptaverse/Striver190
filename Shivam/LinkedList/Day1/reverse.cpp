/*

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode *curr = head;
        ListNode *nex = NULL;
        ListNode *prev = NULL;

        while(curr!=NULL){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        return prev;
    }
};

Java Code :

class Solution {
    public ListNode reverseList(ListNode head) {
        if(head==null || head.next==null) return head;

        ListNode curr = head;
        ListNode nex = null;
        ListNode prev = null;

        ANothere change
        while(curr!=null){
            nex = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nex;
        }
        return prev;
    }
}

THIS IS TO CHECK MY GITHUB WORKFLOW, PLEASE IGNORE THIS CODE, THANK YOU.
*/