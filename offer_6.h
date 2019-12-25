#pragma once
#include <stack>
using namespace std;
struct ListNode
{
	int value;
	ListNode *next;
};
void print_list_reverse(ListNode *phead)
{
	stack<ListNode*> nodes;
	ListNode *temp = phead;
	while (temp!=NULL)
	{
		nodes.push(temp);
		temp = temp->next;
	}

	if (nodes.empty())
		return;
	cout << "从后往前打印链表输出为：" << endl;
	while (!nodes.empty())
	{
		ListNode *p;
		temp = nodes.top();
		int result = temp->value;
		printf("%d\t", result);
		nodes.pop();
	}


}
ListNode* create_lianbiao()
{
	ListNode *head = new ListNode();
	ListNode *rear= head;

	rear->next = NULL;
	int x;
	cout << "请按行输入数字，输入0结束链表输入:" << endl;
	while (true)
	{
		cin >> x;
		ListNode *p = new ListNode();
		if (x == 0)
			break;
		p->value = x;
		rear->next = p;
		rear = p;
	}
	rear->next = NULL;
	cout << "链表创建结束!" << endl;
	return head;
};

//主函数
//#include <iostream>
//#include "offer_6.h"
//using namespace std;
//
//ListNode *ssss;
//
//int main()
//{
//	ssss = create_lianbiao();
//
//
//	print_list_reverse(ssss);
//	return 0;
//}
