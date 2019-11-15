#pragma once
#include <iostream>
using namespace std;
#include <algorithm>

#include <vector>



class Solution {
public:
	/**
	 * @param nums: An integer array
	 * @return: nothing
	 */

	 //利用offset实现
	void recoverRotatedSortedArray(vector<int> &nums) {
		// write your code here
		int offset = getOffset(nums);
		reverse(nums.begin(), nums.begin() + offset);
		reverse(nums.begin() + offset, nums.end());
		reverse(nums.begin(), nums.end());
	}
	///利用vector内部函数实现
	void recoverRotatedSortedArray_vector(vector<int> &nums)
	{
		sort(nums.begin(), nums.end());//升序
		reverse(nums.begin(), nums.end());//降序
	}

private:
	int getOffset(vector<int> & nums) {
		for (int i = 1; i < nums.size(); ++i) {
			if (nums[i] < nums[i - 1]) {
				return i;
			}
		}
		return 0;
	}
};


//主函数
//int main()
//{
//	vector<int> num = { 2,3,4,1 };
//	function.recoverRotatedSortedArray(num);
//	for (int i = 0; i < num.size(); i++)
//	{
//		cout << num[i] << endl;
//	}
//
//}
