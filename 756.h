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
	 * @param l1: the first list
	 * @param l2: the second list
	 * @return: the product list of l1 and l2
	 */
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

	long long multiplyLists(ListNode * l1, ListNode * l2)
	{
		ListNode *p1 = l1;
		int len1 = 0;
		while (p1 != NULL)
		{
			p1 = p1->next;
			len1++;
		}

		ListNode *p3 = l1;
		long long sum1 = 0;
		while (p3 != NULL)
		{
			int m = p3->val;
			sum1 = sum1 + m * pow(10, len1-1);
			len1 = len1 - 1;
			p3 = p3->next;
		}


		ListNode *p2 = l2;
		int len2 = 0;
		while (p2 != NULL)
		{
			p2 = p2->next;
			len2++;
		}
		ListNode *p4 = l2;
		long long sum2 = 0;
		while (p4 != NULL)
		{
			int n = p4->val;
			sum2 = sum2 + n * pow(10, len2-1);
			len2 = len2 - 1;
			p4 = p4->next;
		}
		return sum1 * sum2;

	}
};
