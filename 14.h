#pragma once
#include <iostream>
using namespace std;

#include <vector>
class Solution {
public:
	/**
	 * @param nums: The integer array.
	 * @param target: Target to find.
	 * @return: The first position of target. Position starts from 0.
	 */
	////暴力算法
	//int binarySearch_baoli(vector<int> &nums, int target) {
	//	for (int i=0;i<nums.size();i++)
	//	{
	//		if (nums[i] == target)
	//		{
	//			return i;
	//		}
	//		else if (nums[i] != target&& i==nums.size()-1)
	//		{
	//			return -1;
	//		}
	//	}
	//	return 0;
	//}
	///二分法
	int binarySearch(vector<int> &A, int target) {
		if (A.size() == 0) {
			return -1;
		}

		int start = 0;
		int end = A.size() - 1;
		int mid;

		while (start + 1 != end) {
			mid = start + (end - start) / 2;
			if (A[mid] == target) {
				end = mid;
			}
			else if (A[mid] < target) {
				start = mid;
			}
			else if (A[mid] > target) {
				end = mid;
			}
		}

		if (A[start] == target) {
			return start;
		}
		if (A[end] == target) {
			return end;
		}
	}
};

////主函数
//
//Solution function;
//int main()
//{
//	vector<int> num = { 2,4,4,4,4,5 };
//	int first_weizhi = function.binarySearch(num, 2);
//	std::cout << first_weizhi << std::endl;
//
//}