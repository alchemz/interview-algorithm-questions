//3_removeDuplicatesSortedList.cpp
/*
struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(NULL){}
}
*/
/*
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
由于list已经排序过，重复节点必相邻。由于链表指针是单向的，所以访问每个节点时，判断后一个节点是否是重复节点，
如果是，则删除后一个节点。由于I中重复节点要保留一个，如果碰到重复删除后节点，则不需要考虑删除头指针的特殊情况。
*/
class Solution{
public:
	ListNode* deleteDuplicates(ListNode* head){
		if(!head) return head;
		ListNode *cur = head;
		//判断指针节点是否重复
		while(cur->next){
			//如果重复，则删除后一个节点
			if(cur->val == cur-> next->val){
				ListNode *temp = cur->next;
				cur->next = temp->next;
				delete temp;
			}
			else{
				cur=cur->next;
			}
		}
		return head;
	}
};