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
	 * @param head: the head node
	 * @return: the middle node
	 */
	ListNode * middleNode(ListNode * head)
	{
		ListNode *p = head;
		int len = 0;
		while (p != NULL)
		{
			p = p->next;
			len++;
		}



		if (len % 2 != 0)
		{
			int len1 = 1;
			int a = (1 + len) / 2;
			ListNode *q = head;
			while (q != NULL)
			{
				q = q->next;
				len1++;
				if (len1 == a)
				{
					return q;
				}
			}
		}
		else
		{
			int len2 = 1;
			int b = 1 + len / 2;
			ListNode *m = head;
			while (m != NULL)
			{
				m = m->next;
				len2++;
				if (len2 == b)
				{
					return m;
				}
			}

		}
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
