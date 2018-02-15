//4_rotateList.cpp
/*
Given a list, rotate the list to the right by k places, where k is non-negative.
Example:
Given 1->2->3->4->5->NULL and k = 2,

return 4->5->1->2->3->NULL.
*/
//singly-linked list
/*
struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(NULL){}
}
*/
/*
思路：
思路：

以题中例子说明，向右转k次需要有两个操作。
1. 将原list的头尾相连。
2. 找到倒数第k+1个节点，并将它与倒数第k个节点断开。而倒数第k个节点为新的head。在1中找list的尾时已经计算出了list的总长n。从尾部开始走n-k步即为该点。

corner case：
1. k<=0 || head == NULL，直接返回。
2. k>= L，L为list总长。对于例子中的list，当k=5时旋转后又回到原来状态。所以实际旋转的次数为k%L。
*/
class Solution{
public:
	ListNode* rotateRight(ListNode* head, int k){
		if(k<1 || !head) return head;//corner dases

		ListNode *p = head;
		int len = 1;
        //find the length of the list
		while(p->next){
			p = p -> next;
			len++;
		}
        //找到倒数第k+1个节点，并将它与倒数第k个节点断开。
        //而倒数第k个节点为新的head。
		p-> next = head;
		k = len - k%len;

		while(k>0){
			p = p->next;
			k--;
		}
		head = p->next;
		p->next = NULL;

		return head;
	}
};