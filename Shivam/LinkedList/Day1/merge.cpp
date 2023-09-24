/*

C++ : Iteratively! merging 2 sorted LL

class Solution {
    public :

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {   
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
        ListNode *t1=list1, *t2=list2;
        ListNode *dummyNode=new ListNode(0);
        ListNode *temp=dummyNode;
        while(t1!=NULL && t2!=NULL){
            if(t1->val <= t2->val){
                temp->next=t1;
                t1=t1->next;
            }
            else{
                temp->next=t2;
                t2=t2->next;
            }
             temp=temp->next;
        }
        while(t1!=NULL){
            temp->next=t1;
            t1=t1->next;
            temp=temp->next;
        }
        
        while(t2!=NULL){
            temp->next=t2;
            t2=t2->next;
            temp=temp->next;
        }
        return dummyNode->next;        
    } 
};


JAVA : 

Different method : Recursively !


class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if(list1==null) return list2;
        if(list2==null) return list1;

        if(list1.val < list2.val){
            list1.next = mergeTwoLists(list1.next,list2);
            return list1;
        }
        else{
            list2.next = mergeTwoLists(list1,list2.next);
            return list2;
        }
    }
}

*/
