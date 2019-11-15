#pragma once

#include <iostream>
using namespace std;

#include <vector>
class Solution {
public:
	/*
	 * @param nums: An ineger array
	 * @return: An integer
	 */
	int removeDuplicates(vector<int> &nums)
	{

		vector<int> suoyin;
		if (nums.empty())
		{
			return 0;
		}

		suoyin.push_back(nums[0]);
		for (int i = 1; i < nums.size();i++)
		{
			if (nums[i] == suoyin[suoyin.size()-1])
			{
				continue;
			}
			suoyin.push_back(nums[i]);
		}
		
		nums = suoyin;
		return nums.size();
	}
		
};

///Ö÷º¯Êý
//#include "pch.h"
//#include <iostream>
//using namespace std;
//
//#include "100.h"
//
//
//Solution function;
//int main()
//{
//	cout << "carry on, lok666" << endl;
//	vector<int> nums = { -14,-14,-13,-13,-13,-13,-13,-13,-13,-12,-12,-12,-12,-11,-10,-9,-9,-9,-8,-7,-5,-5,-5,-5,-4,-3,-3,-2,-2,-2,-2,-1,-1,-1,-1,-1,0,1,1,1,1,2,2,2,3,3,3,4,4,4,4,5,5,5,6,6,6,6,7,8,8,8,9,9,9,10,10,10,11,11,11,12,12,12,13,14,14,14,14,15,16,16,16,18,18,18,19,19,19,19,20,20,20,21,21,21,21,21,21,22,22,22,22,22,23,23,24,25,25 };
//	int result = function.removeDuplicates(nums);
//}



