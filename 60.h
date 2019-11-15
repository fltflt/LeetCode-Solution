#pragma once
#include <iostream>
using namespace std;

#include <vector>


class Solution {
public:
	/**
	 * @param A: an integer sorted array
	 * @param target: an integer to be inserted
	 * @return: An integer
	 */

	//方法一
	//int searchInsert_putong(vector<int> &A, int target)
	//{
	//	if (A.empty())
	//	{
	//		return 0;
	//	}
	//	for (int i = 0; i < A.size(); i++)
	//	{
	//		if (A[i] == target)
	//		{
	//			return i;
	//		}
	//	}
	//	for (int j = A.size() - 1; j >= 0; j--)
	//	{
	//		if (target > A[j])
	//		{
	//			return j + 1;
	//		}

	//	}
	//	if (target < A[0])
	//	{
	//		return 0;
	//	}

	//}
	//方法二,二分查找
	int searchInsert(vector<int> &A, int target)
	{
		if (A.empty())
		{
			return 0;
		}
		int start = 0;
		int end = A.size() - 1;
		int mid;
		while (start + 1 < end)
		{
			mid = (end - start) / 2 + start;
			if (A[mid] >= target)
			{
				end = mid;
			}
			else
			{
				start = mid;
			}
		}
		if (A[start] >= target)
		{
			return start;
		}
		if (A[end] >=target)
		{
			return end;
		}
		return A.size();
	}

};

////主函数
//#include "pch.h"
//#include <iostream>
//using namespace std;
//
//#include "60.h"
//
//
//Solution function;
//int main()
//{
//	cout << "carry on, lok666" << endl;
//	vector<int> A = { 1,3,5,6 };
//	int a1 = function.searchInsert(A, 5);
//	int a2 = function.searchInsert(A, 2);
//	int a3 = function.searchInsert(A, 7);
//	int a4 = function.searchInsert(A, 0);
//	cout << a1 << endl;
//	cout << a2 << endl;
//	cout << a3 << endl;
//	cout << a4 << endl;
//}
