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

class Solution
{

public:
	ListNode *vector2lianbiao(vector<int> nums)
	{
		ListNode *head, *p,*rear;
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

	//删除重复链表元素
	ListNode * deleteDuplicates(ListNode * head)
	{
		// write your code here
		ListNode *p = head;
		while (p->next != NULL)
		{
			if (p->next->val == p->val)
			{
				p->next =p->next->next;
			}
			else
			{
				p = p->next;
			}
			
		}
		return head;

	}

	void print_lianbiao(ListNode *head)
	{
		ListNode *p= head;
		while (p != NULL)
		{
			cout << p->val;
			cout << endl;
			p = p->next;
		}
		cout << endl;
	};
	
};

//主函数
//#include "pch.h"
//#include <iostream>
//using namespace std;
//
//#include "112.h"
//#include <vector>
//
//class Solution;
//Solution function;
//int main()
//{
//	ListNode *result, *result_after;
//	vector<int> nums = { 1, 2, 2, 3,3, 4 };
//	result = function.vector2lianbiao(nums);
//	cout << "原链表的内容如下:" << endl;
//	function.print_lianbiao(result);
//	result_after = function.deleteDuplicates(result);
//	cout << "删除重复元素后的链表的内容如下:" << endl;
//	function.print_lianbiao(result_after);
//
//}



