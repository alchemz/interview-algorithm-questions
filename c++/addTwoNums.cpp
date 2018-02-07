/* Add Two Numbers: given two non-empty linked list representing two non-negative integers.
The digits are store in reverse order, and each node contain a single digit
Goal: Add two numbers and return it as a linked List
* Input(2->4->3) + (5->6->4)
* Output: 7->0->8
* Explanation: 342 + 465 = 807
* Definition for singly-linked list
* 

Algorithm:
1. if the linked lists have different length:
l1.length
l2.length
if l1.length>l2.length:
	diff = l1.length-l2.length
	for(int j=0; j<l2.length; j++){
		l3[i]=l1[i]+l2[i]
	}
	for (int i=diff; i<l1.length; i++){
		ListNode(i)=l1[length-diff+i];
	}
struct ListNode {
	int val,
	ListNode *next;
	ListNode(int x): val(x), next(NULL){}
};
*/
class Solution{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
		ListNode *res = new ListNode(-1);
		ListNode *cur = res;
		int carry = 0;
		while(l1 || l2){
			int n1=l1 ? l1->val :0;
			int n2=l2 ? l2->val :0;
			int sum = n1 + n2 + carry;
			carry = sum/10;
			cur-> next = new ListNode(sum %10);
			cur = cur->next;
			if(l1) l1 = l1->next;
			if(l2) l2 = l2->next;
		}
		if(carry) cur->next = new ListNode(1);
		return res->next;
	}
};

//链表求和，进位从后向前
/**
Definition for singly-linked list
struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(NULL){}
};
*/
class Solution{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
		//异常判断
		if(l1 == NULL && l2 ==NULL)
			return null;
		if(l1 == NULL)
			return l2;
		if(l2 == NULL)
			return l1;

		//初始化
		ListNode* result = new ListNode((l1->val + l2->val)%10);
		int carry = (l1-> val + l2->val)/10; //表示进位
		ListNode* templ1 = l1;
		ListNode* templ2 = l2;
		ListNode* tempresult = result;
		//break point
		ListNode* EndNode = new ListNode(0);
		while(templ1 -> next != NULL || templ2 -> next !=NULL)
		{
			if(templ1-> next == NULL)
				templ1 = EndNode;
			else
				templ1=templ2->next;
			if(templ2->next == NULL)
				templ2 = EndNode;
			else
				templ2 = templ2->next;
			tempresult->next = new ListNode((templ1-> val + templ2->val + carry)%10);
			carry = (templ1 ->val + templ2->val + carry)/10;
			tempresult = tempresult ->next;
		}
		if(carry==1)
			tempresult->next = next ListNode(1);
		return result;
	}
}

//1. NULL: 异常判断
//2. 初始化
//3. 表示当前位，表示进位
//4. 判断链表是否结尾，结束节点
//5. 返回结果。