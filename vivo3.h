#pragma once
class Solution {
public:
	/**
	 *
	 * @param n int整型 第n天
	 * @return int整型
	 */
	int solution(int n)
	{
		// write code here
		int sum = 0, i = 1;
		while (sum < n)
		{
			sum += i;
			i += 1;
		}
		int tmp = i - 1, all = 0;
		for (int j = 1; j < tmp; j++)
		{
			all += j * j;
		}
		int a = sum - i + 1;

		all = all + tmp*(n- a);
		return all;

	}
};