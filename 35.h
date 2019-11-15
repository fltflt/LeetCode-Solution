#pragma once
#include <iostream>
using namespace std;
#include <vector>


class ListNode 
{
public:
	int val;
	ListNode *next;
};
 

class Solution {
public:
	/**
	 * @param head: n
	 * @return: The new head of reversed linked list.
	 **/
	//��ת����
	ListNode *reverse(ListNode * head)
	{
		ListNode *pre=NULL;
		while (head != NULL)
		{
			ListNode *temp = head->next;
			head->next = pre;
			pre = head;
			head = temp;
		}
		return pre;

	};
	//����ת����
	ListNode *vector2lianbiao(vector<int> nums)
	{
		ListNode *head, *p, *rear;
		head = rear = new class ListNode;
		head->val = nums[0];
		rear->next = NULL;

		for (int i = 1; i < nums.size(); i++)
		{
			p = new class ListNode;
			p->val = nums[i];
			rear->next = p;
			rear = p;

		}
		rear->next = NULL;
		return head;
	};
	//��ӡ������
	void print_lianbiao(ListNode *head)
	{
		//ListNode *p= new class ListNode;
		ListNode *p = head;
		while (p != NULL)
		{
			cout << p->val;
			cout << endl;
			p = p->next;
		}
		cout << endl;
	};


};

////������
//#include "pch.h"
//#include <iostream>
//using namespace std;
//
//#include "35.h"
//#include <vector>
//
//class Solution;
//Solution function;
//int main()
//{
//	ListNode *result, *result_after;
//	vector<int> nums = { 1, 2, 2, 3,3, 4 };
//	result = function.vector2lianbiao(nums);
//	cout << "ԭ�������������:" << endl;
//	function.print_lianbiao(result);
//	result_after = function.reverse(result);
//	cout << "��תԪ�غ���������������:" << endl;
//	function.print_lianbiao(result_after);
//
//}