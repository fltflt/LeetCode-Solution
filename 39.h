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

	 //����offsetʵ��
	void recoverRotatedSortedArray(vector<int> &nums) {
		// write your code here
		int offset = getOffset(nums);
		reverse(nums.begin(), nums.begin() + offset);
		reverse(nums.begin() + offset, nums.end());
		reverse(nums.begin(), nums.end());
	}
	///����vector�ڲ�����ʵ��
	void recoverRotatedSortedArray_vector(vector<int> &nums)
	{
		sort(nums.begin(), nums.end());//����
		reverse(nums.begin(), nums.end());//����
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


//������
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
