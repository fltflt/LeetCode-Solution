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

class ListNode;
class Solution {
public:
	/**
	 * @param head: the first node of linked list.
	 * @return: An integer
	 */
	int countNodes(ListNode * head)
	{
		if (head == NULL)
		{
			return 0;
		}
		ListNode *p = head;
		int len = 0;
		while (p != NULL)
		{
			p = p->next;
			len++;
		}
		return len;
	};

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