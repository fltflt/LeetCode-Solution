#pragma once

#include <iostream>
using namespace std;

#include <stack>
#include <vector>
class ListNode
{
public:
	int val;
	ListNode *next;
};

class ListNode;
class Solution {
public:
	/**
	 * @param head: The first node of linked list
	 * @param x: An integer
	 * @return: A ListNode
	 */
	ListNode * partition(ListNode * head)
	{
		if (head == NULL)
		{
			return NULL;
		}
		ListNode *temp = head;
		head = head->next;
		free(temp);
	};
	//ListNode * partition(ListNode * head, int x)
	//{
	//	if (head == NULL)
	//	{
	//		return NULL;
	//	}
	//	stack<ListNode*> nodes;
	//	ListNode *temp = head;
	//	while (temp != NULL)
	//	{
	//		if (temp->val < x)
	//		{
	//			nodes.push(temp);
	//			temp = temp->next;
	//			free(temp);

	//		}
	//		temp=temp->next;

	//	}
	//	while (!nodes.empty())
	//	{
	//		ListNode *m = nodes.top();
	//		if (m->val)
	//		{
	//			return 0;
	//		}
	//	}

	//};
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

	void print_lianbiao(ListNode *head)
	{
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


//Ö÷º¯Êý
//#include "pch.h"
//#include <iostream>
//using namespace std;
//
//#include "96.h"
//
//
//class Solution;
//Solution function;
//int main()
//{
//	int count;
//	ListNode *result, *result1;
//	vector<int> nums2 = { 1,2,3,4,5,6 };
//	result = function.vector2lianbiao(nums2);
//	result1 = function.partition(result);
//	function.print_lianbiao(result1);
//}


