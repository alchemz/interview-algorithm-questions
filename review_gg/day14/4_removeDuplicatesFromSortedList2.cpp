//4_removeDuplicatesFromSortedList2.cpp
/*
Given 1->2->3->3->4->4->5, return 1->2->5.
Given 1->1->1->2->3, return 2->3.
*/
/*
struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(NULL){}
}
*/
/*
II比I难在需要删除所有的重复节点。这里需要注意两点：
1. 头节点也可能被删除。可以使用dummy节点来简化。
2. 如果采用与I类似的思路来删除当前节点后所有的重复节点，则完成后还需要把当前节点也删除。因此需要有一个变量来记录当前节点是否有重复。
*/
class Solution{
public:
	ListNode* deleteDuplicates(ListNode* head){
		ListNode *dummy = new ListNode(0);
		dummy->next = head;
		ListNode *pre = dummy, *cur = head;
		bool duplicate = false;

		while(cur){
			if(cur->next && cur-> val == cur-> next ->val){
				ListNode *temp = cur->next;
				cur->next = temp->next;
				delete temp;
				duplicate = true;
			}
			else if(duplicate){
				pre->next = cur->next;
				delete cur;
				cur = pre-> next;
				duplicate = false;
			}else{
				pre = cur;
				cur = cur->next;
			}
		}
		head = dummy->next;
		delete dummy;
		return head;
	}
};