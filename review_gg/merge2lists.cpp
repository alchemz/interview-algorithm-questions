//merge two sorted lists
/*
Description: 
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
Example cases:
Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
Thoughts:
Basically compare the elements in the two linked sorted lists, since it's sorted, just to compare the elements
from head to bottom
s1: compare l1.head, l2.head
s2: if(l1.head > l2.head): l3.append(l2); else: l3.append(l1)
s3: append the rest of l1 or l2
和merge sort中的merge过程很像。两个list l1, l2的head始终指向它们各自的最小节点，取其中更小的那个插入新的list l3中即可。
直到l1, l2中任意一个节点用完，则将另一个list剩余节点插入l3最后即可
*/

/*
Time complexity
Step complexity
Work taken
*/

/*
Definition for singly-linked list
struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(NULL){}
};
*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //create a third list to stored merged elements
        ListNode *l3 = new ListNode(-1);
        ListNode *t3 = l3;
        while(l1 && l2){
            //compare the first element of l1 and l2
            if(l1->val <= l2->val){
                //if l1 is smaller
                t3-> next = l1;
                //point to the next of l1
                l1 = l1->next;
            }
            else{
                //if l2 is smaller
                t3->next =l2;
                l2=l2->next;
            }
            t3 = t3->next;
            t3->next=NULL;   
        }
           //check the rest of l1 and l2
            t3->next= l1?l1:l2;
            //store the l3 in tempNode
            ListNode *temp=l3;
            l3=l3->next;
            delete temp;
            return l3;
    }
};