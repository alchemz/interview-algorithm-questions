//5_partitionList.cpp
stuct ListNode{
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(NULL){}
};
/*

由于不要求sort，只要求partition。可以建立一个新的list l2。遍历原list l1的每个节点p。
p->val < x，保留。
p->val >= x，从l1中移出并插入l2。
由于要删除节点需要使用被删节点的前节点。所以实际写的时候考察的是p->next->val和x的比较。

*/
class Solution{
public:
	ListNode* partition(ListNode* head, int x){
		ListNode *h1 = new ListNode(0);
		ListNode *h2 = new ListNode(0);
		ListNode *t2 = h2;
		h1->next = head;
		head = h1;

		while(head->next){
			if(head->next->val<x)//skip node
				head = head->next;
			else{
				t2->next = head->next;
				head->next = head->next->next;
				t2=t2->next;
				t2->next=NULL;
			}
		}
		head->next = h2->next;
		head = h1->next;
		delete h1;
		delete h2;
		return head;
	}
};