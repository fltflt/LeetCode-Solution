#pragma once

#include <iostream>
#include <algorithm>
using namespace std;


#include <vector>
class Solution {
public:
	/**
	 * @param nums: A list of integers
	 * @return: An integer denotes the middle number of the array
	 */
	int median(vector<int> &nums) {
		sort(nums.begin(), nums.end());
		if (nums.size() % 2 == 0)
		{
			int b = nums.size() / 2;
			return nums[b-1];
		}
		else
		{
			int a = (nums.size() + 1) / 2 - 1;
			return nums[a];

		}

	}
};
///Ö÷º¯Êý
//#include "pch.h"
//#include <iostream>
//using namespace std;
//
//#include "80.h"
//
//
//Solution function;
//int main()
//{
//
//	cout << "carry on, lok666" << endl;
//	vector<int> nums = { 7,9,4,5 };
//	int result = function.median(nums);
//	cout << result << endl;
//}