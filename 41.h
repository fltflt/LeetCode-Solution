#pragma once
#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <numeric>

class Solution {
public:
	/**
	 * @param nums: A list of integers
	 * @return: A integer indicate the sum of max subarray
	 */
	int maxSubArray(vector<int> nums) {
		//sum记录前i个数的和，maxSum记录全局最大值，minSum记录前i个数中0-k的最小值
		int sum = 0, minSum = 0, maxSum = INT_MIN;
		for (int i = 0; i < nums.size(); i++) {
			sum += nums[i];
			maxSum = max(maxSum, sum - minSum);
			minSum = min(minSum, sum);
		}
		return maxSum;
	}
};

//class Solution {
//public:
//	/**
//	 * @param nums: A list of integers
//	 * @return: An integer indicate the sum of max subarray
//	 */
//	int maxSubArray(vector<int> &nums)
//	{
//		vector<int> sum_shuzu;
//
//		vector<int> *p = &nums;
//		int i = 0;
//		while (i < nums.size())
//		{
//			int *p1 = &nums[i];
//			sum_shuzu.push_back(nums[i]);
//			int j = i + 1;
//			while (j < nums.size())
//			{
//				int *p2 = &nums[j];
//				int sum_every = accumulate(p1, p2, 0);
//				sum_shuzu.push_back(sum_every+ nums[j]);
//				j++;
//			}
//			i++;
//
//		}
//		sort(sum_shuzu.begin(), sum_shuzu.end());
//		return sum_shuzu[sum_shuzu.size() - 1];
//
//	}
//};


/////主函数/////
//#include "pch.h"
//#include <iostream>
//using namespace std;
//
//#include "41.h"
//
//
//Solution function;
//int main()
//{
//	vector<int> num = { 1,2,3,4,5,6,7,100,200,1000 };
//	int sum_max = function.maxSubArray(num);
//	cout << sum_max << endl;
//
//}